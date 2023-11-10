#include <stdio.h>

int main() {
    int contadorPositivos = 0, contadorNegativos = 0, totalValores = 0;
    double soma = 0.0, valor;

    printf("Digite os valores (digite 0 para encerrar):\n");

    while (1) {
        printf("Digite um valor: ");
        scanf("%lf", &valor);

        if (valor == 0) {
            break;
        }

        totalValores++;
        soma += valor;

        if (valor > 0) {
            contadorPositivos++;
        } else if (valor < 0) {
            contadorNegativos++;
        }
    }

    if (totalValores > 0) {
        double media = soma / totalValores;

        double percentualPositivos = (double)contadorPositivos / totalValores * 100;
        double percentualNegativos = (double)contadorNegativos / totalValores * 100;

        printf("\n Resultados:\n");
        printf("Média Aritmética: %.2f\n", media);
        printf("Quantidade de Valores Positivos: %d\n", contadorPositivos);
        printf("Quantidade de Valores Negativos: %d\n", contadorNegativos);
        printf("Percentual de Valores Positivos: %.2f%%\n", percentualPositivos);
        printf("Percentual de Valores Negativos: %.2f%%\n", percentualNegativos);
    } else {
        printf("Nenhum valor foi digitado.\n");
    }

    return 0;
}

