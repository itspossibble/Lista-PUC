#include <stdio.h>

int main() {
    int habitantes = 1000;
    int sexo, idade;
    double altura;
    int somaIdade = 0, somaIdadeHomens = 0, countMulheres = 0, countPessoas18a35 = 0;
    double somaAlturaMulheres = 0;

    printf("Digite as informacoes dos habitantes:\n");

    do {
        printf("Sexo (0-feminino, 1-masculino): ");
        scanf("%d", &sexo);

        if (sexo != -1) {
            printf("Idade: ");
            scanf("%d", &idade);

            printf("Altura: ");
            scanf("%lf", &altura);

            somaIdade += idade;

            if (sexo == 0) {
                somaAlturaMulheres += altura;
                countMulheres++;
            } else {
                somaIdadeHomens += idade;
            }

            if (idade >= 18 && idade <= 35) {
                countPessoas18a35++;
            }
        }
    } while (sexo != -1);

    double mediaIdade = (double)somaIdade / habitantes;
    double mediaAlturaMulheres = countMulheres > 0 ? somaAlturaMulheres / countMulheres : 0;
    double mediaIdadeHomens = countMulheres > 0 ? (double)somaIdadeHomens / (habitantes - countMulheres) : 0;
    double percentual18a35 = (double)countPessoas18a35 / habitantes * 100;

    printf("Media da idade do grupo: %.2lf\n", mediaIdade);
    printf("Media da altura das mulheres: %.2lf\n", mediaAlturaMulheres);
    printf("Media da idade dos homens: %.2lf\n", mediaIdadeHomens);
    printf("Percentual de pessoas com idade entre 18 e 35 anos: %.2lf%%\n", percentual18a35);

    return 0;
}

