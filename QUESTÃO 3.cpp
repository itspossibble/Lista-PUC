#include <stdio.h>

int main() {
    int numHabitantes;
    float salario, mediaSalario = 0, maiorSalario = 0;
    int numFilhos, totalFilhos = 0, mediaFilhos = 0;
    int contadorSalarioAte100 = 0;

    printf("Digite o numero de habitantes: ");
    scanf("%d", &numHabitantes);

    if (numHabitantes <= 0) {
        printf("O numero de habitantes deve ser maior que zero.\n");
        return 1;  
    }

    for (int i = 1; i <= numHabitantes; ++i) {
        printf("\nHabitante %d:\n", i);
        printf("Digite o salario: R$ ");
        scanf("%f", &salario);

        printf("Digite o número de filhos: ");
        scanf("%d", &numFilhos);

        mediaSalario += salario;

        totalFilhos += numFilhos;
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
        if (salario <= 100.0) {
            contadorSalarioAte100++;
        }
    }

    mediaSalario /= numHabitantes;

    if (numHabitantes > 0) {
        mediaFilhos = totalFilhos / numHabitantes;
    }

    float percentualSalarioAte100 = (float)contadorSalarioAte100 / numHabitantes * 100.0;

    printf("\nResultados:\n");
    printf("a) Média do salario da populacao: R$ %.2f\n", mediaSalario);
    printf("b) Média do numero de filhos: %.2f\n", (float)mediaFilhos);
    printf("c) Maior salario: R$ %.2f\n", maiorSalario);
    printf("d) Percentual de pessoas com salario até R$100,00: %.2f%%\n", percentualSalarioAte100);

    return 0;
}

