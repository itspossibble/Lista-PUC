#include <stdio.h>

unsigned long long fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

unsigned long long combinacao(int n, int p) {
    return fatorial(n) / (fatorial(p) * fatorial(n - p));
}

unsigned long long arranjo(int n, int p) {
    return fatorial(n) / fatorial(n - p);
}

int main() {
    int N, P;

    printf("Informe o tamanho do conjunto (N): ");
    scanf("%d", &N);

    printf("Informe o numero de elementos nos subconjuntos (P): ");
    scanf("%d", &P);

    if (N < 0 || P < 0 || P > N) {
        printf("Valores invalidos. N deve ser maior ou igual a P, e ambos devem ser nao negativos.\n");
        return 1;
    }

    printf("Combinacao de %d elementos tomados %d a %d: %llu\n", N, P, combinacao(N, P));
    printf("Arranjo de %d elementos tomados %d a %d: %llu\n", N, P, arranjo(N, P));

    return 0;
}

