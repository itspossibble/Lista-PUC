#include <stdio.h>

int main() {
    int numero;
    long long produtorioPares = 1;

    printf("Digite numeros inteiros positivos (digite 0 para encerrar):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
        if (numero % 2 == 0) {
            produtorioPares *= numero;
        }
    }

    printf("O produtorio dos numeros pares sera: %lld\n", produtorioPares);

    return 0;
}

