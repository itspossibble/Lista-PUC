#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    int contadorLinhas = 0;

    printf("Digite os valores (digite um valor negativo para encerrar):\n");

    while (1) {
        printf("Digite um valor: ");
        scanf("%lf", &valor);

        if (valor < 0) {
            break;
        }

        contadorLinhas++;

        if (contadorLinhas % 20 == 1) {
            printf("\n%-12s%-12s%-12s%-20s\n", "Valor", "Quadrado", "Cubo", "Raiz Quadrada");
        }

        printf("%-12.2f%-12.2f%-12.2f%-20.2f\n", valor, pow(valor, 2), pow(valor, 3), sqrt(valor));
    }

    return 0;
}

