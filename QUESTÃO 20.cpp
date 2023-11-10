#include <stdio.h>

int main() {
    // Declarando variáveis
    int numero, somatorioNegativos = 0;

    // Solicitando os números ao usuário
    printf("Digite números inteiros (digite 0 para encerrar):\n");

    // Loop para a leitura dos números
    while (1) {
        // Lendo o número
        printf("Digite um número: ");
        scanf("%d", &numero);

        // Verificando se o número é zero (critério de parada)
        if (numero == 0) {
            break;
        }

        // Atualizando o somatório se o número for negativo
        if (numero < 0) {
            somatorioNegativos += numero;
        }
    }

    // Exibindo o somatório dos números negativos
    printf("O somatório dos números negativos é: %d\n", somatorioNegativos);

    return 0;
}

