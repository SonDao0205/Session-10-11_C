#include<stdio.h>

int main() {
    int m, n;
    printf("Nhap so hang: ");
    scanf("%d", &m);
    printf("Nhap so cot: ");
    scanf("%d", &n);
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m * n - 1; i++) {
        for (int j = 0; j < m * n - i - 1; j++) {
            int row = j / n;
            int col = j % n;
            int nextRow = (j + 1) / n;
            int nextCol = (j + 1) % n;
            if (arr[row][col] > arr[nextRow][nextCol]) {
                int temp = arr[row][col];
                arr[row][col] = arr[nextRow][nextCol];
                arr[nextRow][nextCol] = temp;
            }
        }
    }
    printf("\nMang sau khi sap xep:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
