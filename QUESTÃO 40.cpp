#include <stdio.h>

int calcularFatorial(int num) {
    int fatorial = 1;

    for (int i = 1; i <= num; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Valor | Somatório | Fatorial\n");
    printf("------+-----------+----------\n");

    for (int i = 0; i < n; i++) {
        int m, somatorio = 0;

        printf("Digite um valor inteiro e positivo para m: ");
        scanf("%d", &m);

        printf("%5d | ", m);

        for (int j = 1; j <= m; j++) {
            somatorio += j;
        }

        printf("%9d | %9d\n", somatorio, calcularFatorial(m));
    }

    return 0;
}

