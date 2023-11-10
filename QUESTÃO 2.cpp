#include <stdio.h>

int calcularFatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    } else {
        return numero * calcularFatorial(numero - 1);
    }
}
int main() {
    int N;
    double E = 1.0;
    printf("Digite um valor inteiro e positivo N: ");
    scanf("%d", &N);
    if (N < 0) {
        printf("O valor de N deve ser inteiro e positivo.\n");
        return 1;  // Código de erro
    }
    for (int i = 1; i <= N; ++i) {
        E += 1.0 / calcularFatorial(i);
    }
    printf("O valor de E e: %.6f\n", E);
    return 0;
}

