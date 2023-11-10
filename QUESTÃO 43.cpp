#include <stdio.h>

int main() {
    int grupos = 5;
    int valoresPorGrupo = 4;
    int matriz[5][4];

    printf("Digite 5 grupos de 4 valores (A, B, C, D):\n");

    for (int i = 0; i < grupos; i++) {
        for (int j = 0; j < valoresPorGrupo; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Valores na ordem lida:\n");

    for (int i = 0; i < grupos; i++) {
        for (int j = 0; j < valoresPorGrupo; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Valores ordenados em ordem decrescente:\n");

    for (int i = 0; i < grupos; i++) {
        for (int j = 0; j < valoresPorGrupo - 1; j++) {
            for (int k = 0; k < valoresPorGrupo - j - 1; k++) {
                if (matriz[i][k] < matriz[i][k + 1]) {
                    int temp = matriz[i][k];
                    matriz[i][k] = matriz[i][k + 1];
                    matriz[i][k + 1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < grupos; i++) {
        for (int j = 0; j < valoresPorGrupo; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

