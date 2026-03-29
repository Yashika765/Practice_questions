#include <stdio.h>
#include <stdbool.h>

void displayMatrix(int rows, int cols, int mat[10][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r, c, i, j, k;
    int A[10][10], B[10][10], sum[10][10];

    
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    
    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &B[i][j]);

   
    printf("\n--- Matrix Addition Result ---\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    
     
    printf("\n--- Checking for Saddle Point (Matrix A) ---\n");
    bool foundSaddle = false;
    for (i = 0; i < r; i++) {
        int min_row = A[i][0], col_ind = 0;
        for (j = 1; j < c; j++) {
            if (A[i][j] < min_row) {
                min_row = A[i][j];
                col_ind = j;
            }
        }
        
        bool isSaddle = true;
        for (k = 0; k < r; k++) {
            if (A[k][col_ind] > min_row) {
                isSaddle = false;
                break;
            }
        }
        if (isSaddle) {
            printf("Saddle Point found at (%d, %d) with value: %d\n", i, col_ind, min_row);
            foundSaddle = true;
        }
    }
    if (!foundSaddle) printf("No saddle point found.\n");

    
    if (r == 2 && c == 2) {
        printf("\n--- Inverse of Matrix A (2x2) ---\n");
        float det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);
        if (det == 0) {
            printf("Determinant is 0, Inverse not possible.\n");
        } else {
            printf("Inverse Matrix:\n");
            printf("%.2f\t%.2f\n", A[1][1] / det, -A[0][1] / det);
            printf("%.2f\t%.2f\n", -A[1][0] / det, A[0][0] / det);
        }
    }

    
    if (r == c) {
        printf("\n--- Checking if Matrix A is a Magic Square ---\n");
        int sum_diag1 = 0, sum_diag2 = 0;
        for (i = 0; i < r; i++) {
            sum_diag1 += A[i][i];
            sum_diag2 += A[i][r - 1 - i];
        }

        bool isMagic = (sum_diag1 == sum_diag2);
        
        if (isMagic) {
            for (i = 0; i < r; i++) {
                int rowSum = 0, colSum = 0;
                for (j = 0; j < c; j++) {
                    rowSum += A[i][j];
                    colSum += A[j][i];
                }
                if (rowSum != sum_diag1 || colSum != sum_diag1) {
                    isMagic = false;
                    break;
                }
            }
        }

        if (isMagic) printf("Matrix A is a Magic Square!\n");
        else printf("Matrix A is NOT a magic square.\n");
    }

    return 0;
}