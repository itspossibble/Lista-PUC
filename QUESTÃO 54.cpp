#include <stdio.h>

int ehPrimo(int num) {
    if (num < 2) {
        return 0; // N�o � primo
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0; // N�o � primo
        }
    }

    return 1; // � primo
}

int main() {
    int contador = 3; 
    int num = 4;     

    printf("Os primeiros 20 numeros primos s�o: 1, 2, 3, ");

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

