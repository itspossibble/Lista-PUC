#include <stdio.h>

int main() {
    int votosCandidato1 = 0, votosCandidato2 = 0, votosCandidato3 = 0, votosCandidato4 = 0;
    int votosNulos = 0, votosBranco = 0;

    int codigoVoto;

    printf("Digite o codigo do voto (0 para encerrar):\n");

    while (1) {
        printf("Codigo do voto: ");
        scanf("%d", &codigoVoto);
        if (codigoVoto == 0) {
            break;
        }
        switch (codigoVoto) {
            case 1:
                votosCandidato1++;
                break;
            case 2:
                votosCandidato2++;
                break;
            case 3:
                votosCandidato3++;
                break;
            case 4:
                votosCandidato4++;
                break;
            case 5:
                votosNulos++;
                break;
            case 6:
                votosBranco++;
                break;
            default:
                printf("Codigo de voto invalido. Voto nao contabilizado.\n");
        }
    }
    printf("\n Resultados da Eleicao:\n");
    printf("Candidato 1: %d votos\n", votosCandidato1);
    printf("Candidato 2: %d votos\n", votosCandidato2);
    printf("Candidato 3: %d votos\n", votosCandidato3);
    printf("Candidato 4: %d votos\n", votosCandidato4);
    printf("Votos Nulos: %d votos\n", votosNulos);
    printf("Votos em Branco: %d votos\n", votosBranco);

    return 0;
}

