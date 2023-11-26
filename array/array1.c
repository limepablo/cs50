#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int size, i;
    printf("Enter array size: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation error.\n");
        return 1;
    }

    srand(time(0));

    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        arr[i] = rand() % 100;
        printf("%d", arr[i]);
        if (i != size - 1) {
            printf(", ");
        }
    }

    int sum = 0, max = arr[0], min = arr[0];
    for (i = 0; i < size; i++) {
        sum += arr[i];
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\nAverage: %.2f\n", (float)sum / size);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

   
    return 0;
}