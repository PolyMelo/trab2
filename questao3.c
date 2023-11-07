#include <stdio.h>
#include <string.h>
int main() {
    int A[4][4], B[4][4], C[4][4];
    char operacao[5];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &A[i][j]);
        }
    }  
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    scanf("%s", operacao);
    if (strncmp(operacao, "soma", 4) == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
    } else if (strncmp(operacao, "sub", 3) == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                C[i][j] = A[i][j] - B[i][j];
            }
        }
    } else if (strncmp(operacao, "mult", 4) == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                C[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
