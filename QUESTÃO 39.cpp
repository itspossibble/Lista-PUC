#include <stdio.h>

int ehNumeroPerfeito(int num) {
    int somaDivisores = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }

    return somaDivisores == num;
}

int main() {
    printf("Os 5 primeiros números perfeitos:\n");

    for (int i = 1, encontrados = 0; encontrados < 5; i++) {
        if (ehNumeroPerfeito(i)) {
            printf("%d\n", i);
            encontrados++;
        }
    }

    return 0;
}

