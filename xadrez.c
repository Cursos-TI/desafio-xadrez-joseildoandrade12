#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Torre movimentou: Direita\n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Rainha movimentou: Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas) {
    if (casas > 0) {
        printf("Bispo movimentou: Cima\n");
        printf("Bispo movimentou: Direita\n");
        moverBispo(casas - 1);
    }
}

void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Cavalo movimentou: Baixo\n");
        for (int j = 0; j < i; j++) {
            printf("Cavalo movimentou: Esquerda\n");
        }
    }
}

int main()
{
    moverTorre(5);
    moverRainha(8);
    moverBispo(2);
    printf("\n");
    moverCavalo();
    return 0;
}
