#include <stdio.h>

int ehPrimo(int num) {
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int produto = 1;

    printf("Produto dos números primos entre 92 e 1478:\n");

    for (int i = 92; i <= 1478; i++) {
        if (ehPrimo(i)) {
            produto *= i;
        }
    }

    printf("%d\n", produto);

    return 0;
}

