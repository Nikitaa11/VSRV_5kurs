#include <stdio.h>
#include <stdlib.h>

int main() {
    double size;
    double min = 9999999;
    double max = -9999999;
    double med = 0;
    printf("Enter a size of array: ");
    scanf("%lf", &size);
    double* array = (double*)malloc(size * sizeof(double));
    for (int i = 0; i < size; i++) {
        scanf("%lf", &array[i]);
    }
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
        if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }
    med = sum / size;
    printf("\nMIN >> %lf", min);
    printf("\nMAX >> %lf", max);
    printf("\nMEDIUM_ARIPHMETIC >> %lf", med);
    free(array);
    return 0;
}