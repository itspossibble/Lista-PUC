#include <stdio.h>

// Função para calcular o fatorial de um número
int calcularFatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    } else {
        return numero * calcularFatorial(numero - 1);
    }
}

int main() {
    int n, valor;

    printf("Digite a quantidade de valores a serem lidos (n): ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        int fatorial = calcularFatorial(valor);
        printf("\n Tabela para o valor %d:\n", valor);
        printf("Valor: %d\n", valor);
        printf("Fatorial: %d\n", fatorial);
        printf("\n");
    }
    return 0;
}

