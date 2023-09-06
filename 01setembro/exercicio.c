#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

int child(long num) {
      long x = 1;
      for (int i = 1; i <= num; i++) {
            if (i % 2 == 0) {
                  x = x * i;
            }
      }
      return x;
}

int parent(long num) {
      long x = 1;
      for (int i = 1; i <= num; i++) {
            if (i % 2 != 0) {
                  x = x * i;
            }
      }
      return x;
}

int main() {
      pid_t pid;

      long num;
      int fd[2];

      if(pipe(fd) == -1) {
            printf("Pipe Faild");
            return 1;
      }

      printf("Enter the number: ");
      scanf("%ld", &num);

      pid = fork();

      if(pid < 0) {
            printf("Fork Faild\n"); // Error message
            return 1;
      } else if(pid == 0) { // Processo filho
            close(fd[1]);

            long int a = child(num);
            long int b;

            read(fd[0], &b, sizeof(b));

            long result = a*b;
            printf("Result: %ld\n", result);

            close(fd[0]);
      } else {
            close(fd[0]);

            long b = parent(num);

            write(fd[1], &b, sizeof(b));

            close(fd[1]);
      }

      return 0;
}
