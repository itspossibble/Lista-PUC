#include <stdio.h>

int main() {
    int pessoas = 500;
    char sexo, corOlhos, corCabelos;
    int idade;
    int countAzuis = 0, countVerdes = 0, countCastanhos = 0, countLouros = 0, countPretos = 0;
    int countMascLouros = 0, somaIdadeMascLouros = 0;
    int somaIdadeFem = 0, countFem = 0;

    for (int i = 0; i < pessoas; i++) {
        printf("Informe os dados da pessoa (sexo olhos cabelos idade): ");
        scanf(" %c %c %c %d", &sexo, &corOlhos, &corCabelos, &idade);

        switch (corOlhos) {
            case 'A':
                countAzuis++;
                break;
            case 'V':
                countVerdes++;
                break;
            case 'C':
                countCastanhos++;
                break;
        }

        switch (corCabelos) {
            case 'L':
                countLouros++;
                break;
            case 'C':
                countCastanhos++;
                break;
            case 'P':
                countPretos++;
                break;
        }

        if (sexo == 'M' && corCabelos == 'L') {
            countMascLouros++;
            somaIdadeMascLouros += idade;
        }

        if (sexo == 'F') {
            somaIdadeFem += idade;
            countFem++;
        }
    }

    double mediaIdadeFem = countFem > 0 ? (double)somaIdadeFem / countFem : 0;
    double mediaIdadeMascLouros = countMascLouros > 0 ? (double)somaIdadeMascLouros / countMascLouros : 0;

    printf("Quantidade de pessoas com olhos azuis: %d\n", countAzuis);
    printf("Quantidade de pessoas com olhos verdes: %d\n", countVerdes);
    printf("Quantidade de pessoas com olhos castanhos: %d\n", countCastanhos);
    printf("Quantidade de pessoas com cabelos louros: %d\n", countLouros);
    printf("Quantidade de pessoas com cabelos castanhos: %d\n", countCastanhos);
    printf("Quantidade de pessoas com cabelos pretos: %d\n", countPretos);
    printf("Média de idade das mulheres: %.2lf\n", mediaIdadeFem);
    printf("Média de idade dos homens com cabelos louros: %.2lf\n", mediaIdadeMascLouros);

    return 0;
}

