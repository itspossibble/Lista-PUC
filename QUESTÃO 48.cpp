#include <stdio.h>

int main() {
    int totalAlunos = 75;

    for (int i = 1; i <= totalAlunos; i++) {
        int matricula;
        float nota;
        char conceito;

        printf("Informe a matrIcula do aluno %d: ", i);
        scanf("%d", &matricula);

        printf("Informe a nota do aluno %d: ", i);
        scanf("%f", &nota);


        switch ((int)nota) {
            case 0 ... 49:
                conceito = 'D';
                break;
            case 50 ... 69:
                conceito = 'C';
                break;
            case 70 ... 89:
                conceito = 'B';
                break;
            case 90 ... 100:
                conceito = 'A';
                break;
            default:
                printf("Nota inválida. Informe uma nota entre 0 e 100.\n");
                i--; 
                continue; 
        }

        printf("Matricula: %d, Nota: %.1f, Conceito: %c\n", matricula, nota, conceito);
        printf("\n");
    }

    return 0;
}

