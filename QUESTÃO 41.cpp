#include <stdio.h>

int main() {
    int numAlunos = 50;
    double notas[50][3];
    double medias[50];

    for (int i = 0; i < numAlunos; i++) {
        printf("Digite as tres notas do aluno %d: ", i + 1);
        scanf("%lf %lf %lf", &notas[i][0], &notas[i][1], &notas[i][2]);
        medias[i] = (notas[i][0] * 2 + notas[i][1] * 4 + notas[i][2] * 3) / 10.0;
    }

    printf("Medias ponderadas dos alunos:\n");

    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d: %.2lf\n", i + 1, medias[i]);
    }

    return 0;
}

