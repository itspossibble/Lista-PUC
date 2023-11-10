#include <stdio.h>

int main() {
    // Declarando vari�veis
    int numero, somatorioNegativos = 0;

    // Solicitando os n�meros ao usu�rio
    printf("Digite n�meros inteiros (digite 0 para encerrar):\n");

    // Loop para a leitura dos n�meros
    while (1) {
        // Lendo o n�mero
        printf("Digite um n�mero: ");
        scanf("%d", &numero);

        // Verificando se o n�mero � zero (crit�rio de parada)
        if (numero == 0) {
            break;
        }

        // Atualizando o somat�rio se o n�mero for negativo
        if (numero < 0) {
            somatorioNegativos += numero;
        }
    }

    // Exibindo o somat�rio dos n�meros negativos
    printf("O somat�rio dos n�meros negativos �: %d\n", somatorioNegativos);

    return 0;
}

