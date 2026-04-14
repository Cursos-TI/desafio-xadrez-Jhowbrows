#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Movimentação da Torre com recursividade
void moverTorre(int to){
    if (to > 0){
        printf("Direita\n");
        moverTorre(to - 1);
    }
}

//Movimentação do bispo com recursividade
void moverBispo (int bi) {
    if (bi > 0) {
        printf("Cima,Direita\n");
        moverBispo(bi - 1);
    }
}

/* Movimentação do bispo com loop aninhado
    void moverBispo(int casas) {
        for (int i = 0; i < casas; i++) { // vertical
            for (int j = 0; j < 1; j++) { // horizontal
                printf("Cima,Direita\n");
            }
        }
    }
*/

//Movimentação da Rainha com recursividade
void moverRainha (int ra) {
    if (ra > 0){
        printf("Esquerda\n");
        moverRainha(ra - 1);
    }
}

int main() {
     //exibição do jogo e entrada de dados
    printf("Bem vindo ao jogo de xadrez!\n");
    
    //movimentação pré definida neste desafio
    
    printf("Movimento da Torre!\n");

   //Movimento da Torre atravez de recursividade
    moverTorre(5);

    printf("\nMovimento do Bispo!\n");

    //Movimento do Bispo atravez de recursividade

    moverBispo(5);
    
    printf("\nMovimento da Rainha!\n");

    //Movimento da Rainha atravez de recursividade
    moverRainha(8);

    //Estrutura repetição complexa aninhada do cavalor com while e for e if
    printf("\nmovimento do Cavlo\n");
    for(int i = 0; i < 2; i++) {
        printf("Cima\n");

        for(int j = 0; j <1; j++) {
            if(i == 1) {
                printf("Direita\n");
            }
        }
    }

    return 0;
}
