#include <stdio.h>

int main() {
    int X;

    printf("Digite um valor X: ");
    scanf("%d", &X);

    printf("Série:\n");

    for (int i = 1; i <= 20; i++) {
        printf("%d ", X);
        X *= X;
    }

    printf("\n");

    return 0;
}

