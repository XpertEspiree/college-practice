//WAP to add two m*n matrices using pointer.
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n], B[m][n], C[m][n];

    // Pointer declarations
    int *pA = &A[0][0];
    int *pB = &B[0][0];
    int *pC = &C[0][0];

    // Input first matrix
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < m * n; i++) {
        scanf("%d", (pA + i));
    }

    // Input second matrix
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < m * n; i++) {
        scanf("%d", (pB + i));
    }

    // Addition using pointers
    for (int i = 0; i < m * n; i++) {
        *(pC + i) = *(pA + i) + *(pB + i);
    }

    // Display result
    printf("Resultant Matrix (A + B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(pC + i * n + j));
        }
        printf("\n");
    }

    return 0;
}
