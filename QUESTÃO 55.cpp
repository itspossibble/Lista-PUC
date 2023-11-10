#include <stdio.h>

struct Data {
    int dia, mes, ano;
};

int ehAnoBissexto(int ano) {
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int diasNoMes(int mes, int ano) {
    switch (mes) {
        case 2:
            return ehAnoBissexto(ano) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

int calcularDias(struct Data data) {
    int dias = 0;

    for (int i = 1; i < data.ano; ++i) {
        dias += ehAnoBissexto(i) ? 366 : 365;
    }

    for (int i = 1; i < data.mes; ++i) {
        dias += diasNoMes(i, data.ano);
    }

    dias += data.dia;

    return dias;
}

int main() {
    struct Data data1, data2;

    printf("Informe a primeira data (DD MM AAAA): ");
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);

    printf("Informe a segunda data (DD MM AAAA): ");
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);

    int diferenca = calcularDias(data2) - calcularDias(data1);

    printf("A diferença entre as duas datas sera de %d dias.\n", diferenca);

    return 0;
}

