#include <stdio.h>

int main() {
    int codigoAluno;
    float nota1, nota2, nota3;

    printf("Digite o codigo do aluno (digite 0 para encerrar):\n");

    while (1) {
        printf("COdigo do aluno: ");
        scanf("%d", &codigoAluno);

        if (codigoAluno == 0) {
            break;
        }
        printf("Digite as trEs notas do aluno (separadas por espaços): ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        float media = (nota1 + nota2 + nota3) / 3.0;
        printf("MEdia do aluno %d: %.2f\n", codigoAluno, media);
    }

    return 0;
}

