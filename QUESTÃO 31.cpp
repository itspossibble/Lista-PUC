#include <stdio.h>

int main() {
    int valor, dentroIntervalo = 0, foraIntervalo = 0;

    printf("Digite 10 valores:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20) {
            dentroIntervalo++;
        } else {
            foraIntervalo++;
        }
    }

    printf("Quantidade de valores dentro do intervalo [10, 20]: %d\n", dentroIntervalo);
    printf("Quantidade de valores fora do intervalo: %d\n", foraIntervalo);

    return 0;
}

