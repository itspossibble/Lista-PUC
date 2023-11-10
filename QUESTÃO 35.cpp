#include <stdio.h>

int main() {
    int N;

    printf("Digite o numero de valores a serem lidos: ");
    scanf("%d", &N);

    printf("Valor | Fatorial\n");
    printf("------+----------\n");

    for (int i = 0; i < N; i++) {
        int valor, fatorial = 1;

        printf("%5d | ", valor);
        scanf("%d", &valor);

        if (valor >= 0) {
            for (int j = 1; j <= valor; j++) {
                fatorial *= j;
            }

            printf("%9d\n", fatorial);
        } else {
            printf("Invalido\n");
        }
    }

    return 0;
}

