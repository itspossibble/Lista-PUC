#include <stdio.h>

int main() {
    int n;
    int H = 0;

    printf("Digite um numero inteiro e positivo: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        H += 10;
    }

    printf("Resultado final de H: %d\n", H);

    return 0;
}

