#include <stdio.h>

int main() {
    int codigo;
    double altura, maiorAltura = 0, menorAltura = 100000, somaAlturaMulheres = 0, somaAlturaTurma = 0;
    int quantidadeMulheres = 0;

    printf("Digite informações de 50 pessoas (altura e sexo - código 1 para masculino, código 2 para feminino):\n");

    for (int i = 0; i < 50; i++) {
        scanf("%lf %d", &altura, &codigo);

        if (altura > maiorAltura) {
            maiorAltura = altura;
        }

        if (altura < menorAltura) {
            menorAltura = altura;
        }

        somaAlturaTurma += altura;

        if (codigo == 2) {
            somaAlturaMulheres += altura;
            quantidadeMulheres++;
        }
    }

    double mediaAlturaMulheres = (quantidadeMulheres > 0) ? somaAlturaMulheres / quantidadeMulheres : 0;
    double mediaAlturaTurma = somaAlturaTurma / 50;

    printf("Maior altura da turma: %.2lf\n", maiorAltura);
    printf("Menor altura da turma: %.2lf\n", menorAltura);
    printf("Média da altura das mulheres: %.2lf\n", mediaAlturaMulheres);
    printf("Média da altura da turma: %.2lf\n", mediaAlturaTurma);

    return 0;
}

