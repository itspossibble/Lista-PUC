#include <stdio.h>

int main() {
    int codigo;
    double precoCusto, precoNovo, somaPrecosSemAumento = 0, somaPrecosComAumento = 0;
    int quantidadeProdutos = 0;

    printf("Digite o codigo e o preco de custo de cada produto:\n");
    printf("Para encerrar, digite um codigo negativo.\n");

    while (1) {
        printf("Digite o c�digo do produto: ");
        scanf("%d", &codigo);

        if (codigo < 0) {
            break;
        }

        printf("Digite o pre�o de custo do produto: ");
        scanf("%lf", &precoCusto);

        precoNovo = precoCusto * 1.20;

        somaPrecosSemAumento += precoCusto;
        somaPrecosComAumento += precoNovo;
        quantidadeProdutos++;

        printf("Codigo: %d - Pre�o Novo: %.2lf\n", codigo, precoNovo);
    }

    if (quantidadeProdutos > 0) {
        double mediaPrecosSemAumento = somaPrecosSemAumento / quantidadeProdutos;
        double mediaPrecosComAumento = somaPrecosComAumento / quantidadeProdutos;

        printf("\n Media dos precos sem aumento: %.2lf\n", mediaPrecosSemAumento);
        printf("Media dos precos com aumento: %.2lf\n", mediaPrecosComAumento);
    } else {
        printf("Nenhum produto foi digitado.\n");
    }

    return 0;
}

