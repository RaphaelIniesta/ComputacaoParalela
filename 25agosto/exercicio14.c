#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Uma string exemplo";
    int len = strlen(str);

    printf("Original: %s\n", str);
    
    int pos = 7;
    char insert = 'f';

    for(int i = len; i >= len; --i)
        str[i+1] = str[i];

    str[pos] = insert;

    printf("String final: %s\n", str);

    return 0;
}
