#include <stdio.h>

int main() {
    int valor;
    int maior, menor;

    printf("Digite 50 valores inteiros:\n");

    for (int i = 0; i < 50; ++i) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);

        if (i == 0) {
            maior = valor;
            menor = valor;
        } else {
            if (valor > maior) {
                maior = valor;
            }
            if (valor < menor) {
                menor = valor;
            }
        }
    }
    printf("\nResultado:\n");
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);

    return 0;
}

