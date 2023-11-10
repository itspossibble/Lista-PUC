#include <stdio.h>

int main() {
    int n;
    double soma = 0;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            soma += 1.0 / i;
        }

        printf("Soma: %.2lf\n", soma);
    } else {
        printf("Por favor, digite um valor inteiro e positivo.\n");
    }

    return 0;
}

