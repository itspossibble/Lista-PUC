#include <stdio.h>

int main() {
    float alturaChico = 1.50;
    float alturaZe = 1.10;

    int crescimentoChico = 2;
    int crescimentoZe = 3;

    int anos = 0;

    while (alturaZe <= alturaChico) {
        alturaChico += crescimentoChico / 100.0;  
        alturaZe += crescimentoZe / 100.0;        
        anos++;
    }

    printf("Serao necessarios %d anos para que Ze seja mais alto que Chico.\n", anos);

    return 0;
}

