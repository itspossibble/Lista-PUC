#include <stdio.h>

int main() {
    int N;

    printf("Digite 20 valores para N:\n");

    for (int i = 0; i < 20; i++) {
        scanf("%d", &N);

        printf("Tabuada de %d:\n", N);

        for (int j = 1; j <= N; j++) {
            printf("%d x %d = %d\n", j, N, j * N);
        }
    }

    int numeroAluno, altura, numeroAlunoMaisAlto, numeroAlunoMaisBaixo;
    int alturaMaisAlta = -1, alturaMaisBaixa = 100000;

    printf("Digite 5 conjuntos de 2 valores (numero do aluno e altura em centimetros):\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d %d", &numeroAluno, &altura);

        if (altura > alturaMaisAlta) {
            alturaMaisAlta = altura;
            numeroAlunoMaisAlto = numeroAluno;
        }

        if (altura < alturaMaisBaixa) {
            alturaMaisBaixa = altura;
            numeroAlunoMaisBaixo = numeroAluno;
        }
    }

    printf("Aluno mais alto: Numero %d, Altura %d cm\n", numeroAlunoMaisAlto, alturaMaisAlta);
    printf("Aluno mais baixo: Numero %d, Altura %d cm\n", numeroAlunoMaisBaixo, alturaMaisBaixa);

    return 0;
}

