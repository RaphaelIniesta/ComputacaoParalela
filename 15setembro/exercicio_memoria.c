#include <stdio.h>
#include <stdlib.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    key_t key;
    pid_t pid;
    int shmid;
    int mode;

    if ((shmid = shmget(key, sizeof(int), 0644 | IPC_CREAT)) == -1) {
        perror("shmget\n");
        return 1;
    }

    int *num = (int *)shmat(shmid, NULL, 0);
    if (*num == -1) {
        perror("shmat");
        exit(1);
    }

    *num = 1;

    pid = fork();

    if(pid < 0) perror("fork");
    else if(pid == 0) {
        printf("Processo filho, valor inicial: %d\n", *num);

        *num += 2;

        printf("Processo filho, valor final: %d\n", *num);

        shmdt(num);
        exit(0);
    }
    
    else {
        printf("Processo pai, valor inicial: %d\n", *num);

        wait(NULL);

        *num *= 4;
        printf("Processo pai, valor final: %d\n", *num);

        shmdt(num);
    }
}
