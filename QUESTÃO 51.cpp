#include <stdio.h>

int main() {
    int n;
    unsigned long long fatorial = 1;

    printf("Informe um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numero invalido. Informe um numero inteiro não negativo.\n");
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        fatorial *= i;
    }

    printf("O fatorial de %d sera %llu\n", n, fatorial);

    return 0;
}

