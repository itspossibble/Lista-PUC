#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;

    printf("Digite numeros inteiros (digite 0 para encerrar):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }
        if (numero % 2 == 0) {
            soma += numero;
            quantidade++;
        }
    }
    if (quantidade > 0) {
        double media = (double)soma / quantidade;
        printf("A media dos números pares e: %.2f\n", media);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    return 0;
}

