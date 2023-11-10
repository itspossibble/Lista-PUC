#include <stdio.h>

int main() {
    int numero, quantidadePares = 0, quantidadeImpares = 0, somaPares = 0, quantidadeTotal = 0;
    printf("Digite numeros positivos (digite 0 para encerrar):\n");

    while (1) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        quantidadeTotal++;

        if (numero % 2 == 0) {
            quantidadePares++;
            somaPares += numero;
        } else {
            quantidadeImpares++;
        }
    }

    if (quantidadeTotal > 0) {
        double mediaPares = quantidadePares > 0 ? (double)somaPares / quantidadePares : 0.0;
        double mediaGeral = (double)(somaPares + quantidadeImpares) / quantidadeTotal;

        printf("\nResultados:\n");
        printf("Quantidade de Numeros Pares: %d\n", quantidadePares);
        printf("Quantidade de Numeros Impares: %d\n", quantidadeImpares);
        printf("Média de Numeros Pares: %.2lf\n", mediaPares);
        printf("Média Geral: %.2lf\n", mediaGeral);
    } else {
        printf("Nenhum numero foi digitado.\n");
    }

    return 0;
}

