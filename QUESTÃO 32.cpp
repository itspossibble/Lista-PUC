#include <stdio.h>

int main() {
    int a, b;

    printf("Digite 5 pares de valores a e b (a < b), ambos inteiros e positivos:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d %d", &a, &b);

        if (a < b && a % 2 == 0) {
            printf("Inteiros pares de %d até %d, incluindo %d e %d:\n", a, b, a, b);

            for (int j = a; j <= b; j += 2) {
                printf("%d\n", j);
            }
        } else {
            printf("Valores inválidos. Digite novamente.\n");
            i--;  
        }
    }

    return 0;
}

