#include <stdio.h>

int main() {
    int x, y;
    long long resultado = 1;

    printf("Informe o valor inteiro e positivo de X: ");
    scanf("%d", &x);

    printf("Informe o valor inteiro e positivo de Y: ");
    scanf("%d", &y);

    if (x < 0 || y < 0) {
        printf("Valores invalidos. Informe números inteiros e positivos.\n");
        return 1;
    }

    for (int i = 0; i < y; ++i) {
        resultado *= x;
    }

    printf("%d elevado a %d e igual a %lld\n", x, y, resultado);

    return 0;
}

