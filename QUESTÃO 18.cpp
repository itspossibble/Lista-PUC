#include <stdio.h>
int calcularFatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    } else {
        return numero * calcularFatorial(numero - 1);
    }
}

int main() {
    int m;

    printf("Digite valores para m (digite um valor negativo para encerrar):\n");

    while (1) {
        printf("Digite o valor de m: ");
        scanf("%d", &m);
        if (m < 0) {
            break;
        }

        if (m % 2 == 0) {
            int contadorDivisores = 0;
            for (int i = 1; i <= m; ++i) {
                if (m % i == 0) {
                    contadorDivisores++;
                }
            }

            printf("O numero %d e par e possui %d divisores.\n\n", m, contadorDivisores);
        } else {
            if (m < 10) {

                int fatorial = calcularFatorial(m);
                printf("O numero %d e impar e menor que 10. Seu fatorial sera: %d\n\n", m, fatorial);
            } else {
                int soma = 0;
                for (int i = 1; i <= m; ++i) {
                    soma += i;
                }
                printf("O numero %d é ímpar e maior ou igual a 10. A soma dos inteiros de 1 até %d e: %d\n\n", m, m, soma);
            }
        }
    }
    return 0;
}

