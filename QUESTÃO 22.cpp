#include <stdio.h>

int main() {
    int idade, maiorIdade = -1, menorIdade = -1, totalIdades = 0, mulheresSalarioAte100 = 0;
    char sexo;
    double salario, somaSalarios = 0.0;
    int contador = 0;

    printf("Digite os dados dos habitantes (idade, sexo (M/F), salário)\n");
    printf("Para encerrar, digite uma idade negativa:\n");

    while (1) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Digite o salario: ");
        scanf("%lf", &salario);
        totalIdades++;
        somaSalarios += salario;

        if (idade > maiorIdade || maiorIdade == -1) {
            maiorIdade = idade;
        }

        if (idade < menorIdade || menorIdade == -1) {
            menorIdade = idade;
        }

        if (sexo == 'F' && salario <= 100.00) {
            mulheresSalarioAte100++;
        }

        contador++;
    }

    if (totalIdades > 0) {
        double mediaSalario = somaSalarios / totalIdades;

        printf("\nResultados:\n");
        printf("Media de salário do grupo: %.2lf\n", mediaSalario);
        printf("Maior idade do grupo: %d\n", maiorIdade);
        printf("Menor idade do grupo: %d\n", menorIdade);
        printf("Quantidade de mulheres com salario ate R$100.00: %d\n", mulheresSalarioAte100);
    } else {
        printf("Nenhum dado foi digitado.\n");
    }

    return 0;
}

