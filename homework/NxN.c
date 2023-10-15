#include <stdio.h>

int main()
{
    int N;

    printf("Enter matrix size: ");
    scanf("%d", &N);

    int matrix[N][N];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("Cocha matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {

            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    printf("Matrix with changed symmetrical elements:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\n", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}