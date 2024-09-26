#include <stdio.h>
#include <string.h>

#define LEN 30

int main() {
    char name[LEN];
    int i = 0;
    while (name[i - 1] != '\n') {
        scanf("%c", &name[i]);
        i++;
    }
    printf("Hello, ");
    for (int j = 0; j < i; j++) {
        printf("%c", name[j]);
    }
    
    return 0;
}