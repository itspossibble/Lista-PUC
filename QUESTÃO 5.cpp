#include <stdio.h>

int main() {
    int valor;
    int soma = 0;
    int quantidade = 0;
    printf("Digite valores inteiros positivos (digite um valor negativo para encerrar):\n");
    while (1) {
        printf("Digite um valor: ");
        scanf("%d", &valor);

        if (valor < 0) {
            break;
        }
        soma += valor;
                quantidade++;
    }
    if (quantidade > 0) {
        double media = (double)soma / quantidade;
        printf("A media aritmetica dos valores e: %.2f\n", media);
    } else {
        printf("Nenhum valor positivo foi digitado.\n");
    }

    return 0;
}

