#include <stdio.h>

int main() {
A
    int n, a1, r;

    printf("Digite o numero de termos (numero inteiro positivo): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("O numero de termos deve ser um inteiro positivo.\n");
        return 1;  
    }

    printf("Digite o primeiro termo (a1): ");
    scanf("%d", &a1);

    printf("Digite a razAo (r): ");
    scanf("%d", &r);
    printf("\n Termos da Progressao Aritmetica:\n");
    int soma = 0;

    for (int i = 0; i < n; ++i) {
        int termo = a1 + i * r;
        printf("%d ", termo);
        soma += termo;
    }
    printf("\n\nSoma dos Elementos: %d\n", soma);

    return 0;
}

