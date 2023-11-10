#include <stdio.h>

int main() {
    int a;
    int contadorNegativos = 0;
    for (int i = 0; i < 5; ++i) {
        printf("Digite o valor de a%d: ", i + 1);
        scanf("%d", &a);
        if (a < 0) {
            contadorNegativos++;
        }
    }
    printf("A quantidade de valores negativos é: %d\n", contadorNegativos);
    return 0;
}

