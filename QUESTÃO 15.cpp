#include <stdio.h>

int main() {
    int intervalo1 = 0, intervalo2 = 0, intervalo3 = 0, intervalo4 = 0;
    double numero;
    printf("Digite os numeros (digite um número negativo para encerrar):\n");
    while (1) {
        printf("Digite um numero: ");
        scanf("%lf", &numero);
        if (numero < 0) {
            break;
        }
        if (numero >= 0 && numero <= 25) {
            intervalo1++;
        } else if (numero >= 26 && numero <= 50) {
            intervalo2++;
        } else if (numero >= 51 && numero <= 75) {
            intervalo3++;
        } else if (numero >= 76 && numero <= 100) {
            intervalo4++;
        }
    }
    printf("\nResultados:\n");
    printf("Números no intervalo [0,25]: %d\n", intervalo1);
    printf("Números no intervalo [26,50]: %d\n", intervalo2);
    printf("Números no intervalo [51,75]: %d\n", intervalo3);
    printf("Números no intervalo [76,100]: %d\n", intervalo4);

    return 0;
}

