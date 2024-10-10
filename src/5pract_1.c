#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter a size of array: ");
    scanf("%d", &size);
    int* array = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        array[i] = i + 1;
    }
    for (int i = 0; i < size; i++) {
        printf("%d\t", array[i]);
    }
    printf("\nAdresses of elements: ");
    for (int i = 0; i < size; i++) {
        printf("%p\t", &array[i]);
    }
    free(array);
    printf("\n");
    return 0;
}