#include <stdio.h>

int recursiveSum(int arr[], int n) {

    if (n == 0) {
        return 0;
    } else {

        return arr[n - 1] + recursiveSum(arr, n - 1);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = recursiveSum(arr, n);

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}