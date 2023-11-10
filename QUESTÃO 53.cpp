#include <stdio.h>

int ehPrimo(int num) {
    if (num < 2) {
        return 0; // Não é primo
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // Não é primo
        }
    }

    return 1; // É primo
}

int main() {
    int contador = 3; // Começamos com 3, pois 1 e 2 já são primos
    int num = 4;      // Começamos a verificar a partir do número 4

    printf("Os primeiros 20 números primos são: 1, 2, 3, ");

    while (contador <= 20) {
        if (ehPrimo(num)) {
            printf("%d, ", num);
            ++contador;
        }
        ++num;
    }

    printf("\n");

    return 0;
}

