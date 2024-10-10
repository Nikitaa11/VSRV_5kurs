#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter a size of array: ");
    scanf("%d", &size);
    int **array = (int**)malloc(size * sizeof(int*));
    for (int i = 0; i < size; i++) {
        array[i] = (int*)malloc(size*sizeof(int));
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            array[i][j] = j + 10;
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("\nAdresses of elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%p\t", &array[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < size; i++) {
        free(array[i]);
    }
    free(array);
    return 0;
}