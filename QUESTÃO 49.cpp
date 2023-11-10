#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fatorial = 1;

    printf("Informe um valor inteiro e positivo N: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Valor inválido. Informe um número inteiro e positivo.\n");
        return 1;
    }

    for (i = 1; i <= n; ++i) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %llu\n", n, fatorial);

    return 0;
}

