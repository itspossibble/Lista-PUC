#include <stdio.h>

int main() {
    int n;

    printf("Digite 20 valores para a variavel n:\n");
    for (int i = 0; i < 20; ++i) {
        printf("Digite o valor de n: ");
        scanf("%d", &n);
        printf("\nTabuada de 1 ate %d:\n", n);

        for (int j = 1; j <= n; ++j) {
            printf("%d x %d = %d\n", j, n, j * n);
        }

        printf("\n");
    }
    return 0;
}

