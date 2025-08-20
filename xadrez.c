#include <stdio.h>

int main() {
    int torre = 0, bispo = 0, rainha;
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

    printf("\n");

    for (int i = 0; i < 2; i++) {
        printf("Cavalo movimentou: Baixo\n");
        for (int j = 0; j < i; j++) {
            printf("Cavalo movimentou: Esquerda\n");
        }
    }

    return 0;
}
