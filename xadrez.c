#include <stdio.h>

int main() {
    int torre = 0, bispo = 0, rainha = 0;
    while (torre < 5) {
        torre++;
        printf("Torre movimentou: Direita\n");
    }

    for (rainha = 0; rainha < 8; rainha++) {
        printf("Rainha movimentou: Esquerda\n");
    }

    do {
        bispo++;
        printf("Bispo movimentou: Cima, Direita\n");
    } while (bispo < 5);
    
    return 0;
}
