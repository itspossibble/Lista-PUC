#include <stdio.h>

int main() {
    int valor, maior, menor;
    double soma = 0;

    scanf("%d", &valor);
    maior = valor;
    menor = valor;
    soma += valor;

    for (int i = 1; i < 500; i++) {
        scanf("%d", &valor);

        if (valor > maior) {
            maior = valor;
        }

        if (valor < menor) {
            menor = valor;
        }

        soma += valor;
    }

    printf("%d\n", maior);
    printf("%d\n", menor);
    printf("%.2lf\n", soma / 500.0);

    return 0;
}

