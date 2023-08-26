#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Uma string exemplo";
    int len = strlen(str);

    printf("Original: %s\n", str);
    
    int pos = 5;

    for(int i = pos; i < len; i++)
        str[i] = str[i+1];

    str[len-1] = '\0';

    printf("String final: %s\n", str);

    return 0;
}
