#include <stdio.h>

int main() {
    int m, n;

    printf("Digite pares de valores m e n (ambos inteiros e positivos, digite um par com m negativo para encerrar):\n");

    while (1) {
        printf("Digite o valor de m: ");
        scanf("%d", &m);

        if (m < 0) {
            break;
        }

        printf("Digite o valor de n: ");
        scanf("%d", &n);
        int soma = 0;
        for (int i = m; i < m + n; ++i) {
            soma += i;
        }

        printf("A soma dos %d inteiros consecutivos a partir de %d E: %d\n\n", n, m, soma);
    }

    return 0;
}

