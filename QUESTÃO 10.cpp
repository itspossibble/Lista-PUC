#include <stdio.h>

int main() {
    int codigoAluno;
    float nota1, nota2, nota3, media;

    printf("Digite o codigo do aluno (digite um codigo negativo para encerrar):\n");

    while (1) {
        printf("Código do aluno: ");
        scanf("%d", &codigoAluno);
        if (codigoAluno < 0) {
            break;
        }

        printf("Digite as tres notas do aluno (separadas por espaços): ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);
        media = (nota1 * 4 + nota2 * 3 + nota3 * 3) / 10.0;
        printf("\nResultados para o aluno %d:\n", codigoAluno);
        printf("Notas: %.2f, %.2f, %.2f\n", nota1, nota2, nota3);
        printf("Média: %.2f\n", media);

        if (media >= 5.0) {
            printf("Situacao: APROVADO\n");
        } else {
            printf("Situacao: REPROVADO\n");
        }

        printf("\n");
    }

    return 0;
}

