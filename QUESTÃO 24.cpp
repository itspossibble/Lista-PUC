#include <stdio.h>

int main() {
    int maiorIdade = -1;
    int mulheresVerdesLourosEntre18e35 = 0;

    printf("Digite as informações dos habitantes:\n");

    while (1) {
        char sexo, corOlhos, corCabelos;
        int idade;

        printf("\nInforme o sexo (M/F, digite 0 para encerrar): ");
        scanf(" %c", &sexo);

        if (sexo == '0') {
            break;
        }

        printf("Informe a cor dos olhos (A - Azuis, V - Verdes, C - Castanhos): ");
        scanf(" %c", &corOlhos);

        printf("Informe a cor dos cabelos (L - Louros, C - Castanhos, P - Pretos): ");
        scanf(" %c", &corCabelos);

        printf("Informe a idade: ");
        scanf("%d", &idade);
        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        if (sexo == 'F' && idade >= 18 && idade <= 35 && corOlhos == 'V' && corCabelos == 'L') {
            mulheresVerdesLourosEntre18e35++;
        }
    }

    printf("\nResultados:\n");
    printf("Maior idade dos habitantes: %d\n", maiorIdade);
    printf("Quantidade de mulheres com idade entre 18 e 35, olhos verdes e cabelos louros: %d\n", mulheresVerdesLourosEntre18e35);

    return 0;
}

