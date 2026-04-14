#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int to = 1,bi = 1,ra = 1;

    //exibição do jogo e entrada de dados
    printf("Bem vindo ao jogo de xadrez!\n");
    
    // Implementação de Movimentação do Bispo
    printf("\nMovimento do Bispo!\n");

    //Estrutura de repetição do bispo com do while
    do {
        printf("Cima,Direita\n");
        bi++;
    } while (bi <= 5);

    // Implementação de Movimentação da Torre
    printf("\nMovimento da Torre!\n");

    //estrutura de repetição da torre com while
    while (to <= 5)
    {
        printf("Direita\n");
        to++;
    }

    // Implementação de Movimentação da Rainha
    printf("\nMovimento da Rainha!\n");

    //Estrutura de repetição da rainha com for
    for(ra = 1; ra <= 8; ra++) {
        printf("Esquerda\n");
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
