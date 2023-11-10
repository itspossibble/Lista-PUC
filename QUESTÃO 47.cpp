#include <stdio.h>

int main() {
    int totalClientes = 150;
    
    for (int i = 1; i <= totalClientes; i++) {
        char nome[50];
        double valorCompras, bonus;

        printf("Informe o nome do cliente %d: ", i);
        scanf("%s", nome);

        printf("Informe o valor das compras do cliente %d no ano passado: ", i);
        scanf("%lf", &valorCompras);

        if (valorCompras < 500000) {
            bonus = valorCompras * 0.10;
        } else {
            bonus = valorCompras * 0.15;
        }

        printf("Cliente: %s\n", nome);
        printf("Bonus: %.2lf\n", bonus);
        printf("\n");
    }

    return 0;
}

