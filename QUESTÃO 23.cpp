#include <stdio.h>

int main() {
    int totalHabitantes = 0;
    int totalHomens = 0, totalMulheres = 0;
    int olhosAzuis = 0, olhosVerdes = 0, olhosCastanhos = 0;
    int cabelosLouros = 0, cabelosCastanhos = 0, cabelosPretos = 0;
    int totalIdade = 0;

    printf("Digite as informações dos habitantes:\n");

    while (1) {
        char sexo, corOlhos, corCabelos;
        int idade;

        printf("\nInforme o sexo (M/F): ");
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

        totalHabitantes++;
        totalIdade += idade;

        if (sexo == 'M') {
            totalHomens++;
        } else if (sexo == 'F') {
            totalMulheres++;
        }

        switch (corOlhos) {
            case 'A':
                olhosAzuis++;
                break;
            case 'V':
                olhosVerdes++;
                break;
            case 'C':
                olhosCastanhos++;
                break;
        }

        switch (corCabelos) {
            case 'L':
                cabelosLouros++;
                break;
            case 'C':
                cabelosCastanhos++;
                break;
            case 'P':
                cabelosPretos++;
                break;
        }
    }

    printf("\n Estatísticas:\n");
    printf("Total de habitantes: %d\n", totalHabitantes);
    printf("Total de homens: %d\n", totalHomens);
    printf("Total de mulheres: %d\n", totalMulheres);
    printf("Média de idade: %.2lf\n", (double)totalIdade / totalHabitantes);
    printf("Cor dos olhos:\n");
    printf("  Azuis: %d\n", olhosAzuis);
    printf("  Verdes: %d\n", olhosVerdes);
    printf("  Castanhos: %d\n", olhosCastanhos);
    printf("Cor dos cabelos:\n");
    printf("  Louros: %d\n", cabelosLouros);
    printf("  Castanhos: %d\n", cabelosCastanhos);
    printf("  Pretos: %d\n", cabelosPretos);

    return 0;
}

