#include <stdio.h>

int main() {
    int numero, quantidade = 0;
    double soma = 0;

    printf("Digite n�meros entre 13 e 73. Digite 0 para encerrar:\n");

    do {
        scanf("%d", &numero);

        if (numero >= 13 && numero <= 73) {
            soma += numero;
            quantidade++;
        } else if (numero != 0) {
            printf("Digite um n�mero entre 13 e 73.\n");
        }

    } while (numero != 0);

    if (quantidade > 0) {
        double media = soma / quantidade;
        printf("M�dia: %.2lf\n", media);
    } else {
        printf("Nenhum n�mero v�lido foi digitado.\n");
    }

    return 0;
}

