#include <stdio.h>

int main() {
    int cidades = 200;
    char estado[2];
    int veiculosPasseio, acidentesComVitimas;
    int maiorIndice = 0, menorIndice = 1000000;
    int codigoMaiorIndice, codigoMenorIndice;
    int somaVeiculos = 0, totalVeiculos = 0, totalAcidentesRS = 0, cidadesRS = 0;

    printf("Digite os dados das 200 cidades brasileiras:\n");

    for (int i = 0; i < cidades; i++) {
        int codigoCidade;

        scanf("%d %s %d %d", &codigoCidade, estado, &veiculosPasseio, &acidentesComVitimas);

        int indice = acidentesComVitimas * 1000 / veiculosPasseio;

        if (indice > maiorIndice) {
            maiorIndice = indice;
            codigoMaiorIndice = codigoCidade;
        }

        if (indice < menorIndice) {
            menorIndice = indice;
            codigoMenorIndice = codigoCidade;
        }

        somaVeiculos += veiculosPasseio;
        totalVeiculos += 1;

        if (estado[0] == 'R' && estado[1] == 'S') {
            totalAcidentesRS += acidentesComVitimas;
            cidadesRS += 1;
        }
    }

    double mediaVeiculos = (double)somaVeiculos / totalVeiculos;
    double mediaAcidentesRS = (double)totalAcidentesRS / cidadesRS;

    printf("Cidade com maior índice de acidentes: %d\n", codigoMaiorIndice);
    printf("Cidade com menor índice de acidentes: %d\n", codigoMenorIndice);
    printf("Média de veículos nas cidades brasileiras: %.2lf\n", mediaVeiculos);
    printf("Média de acidentes com vítimas no Rio Grande do Sul: %.2lf\n", mediaAcidentesRS);

    return 0;
}

