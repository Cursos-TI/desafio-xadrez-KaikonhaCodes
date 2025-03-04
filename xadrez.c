#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int bispo = 1, torre = 1, rainha = 1;
    printf("Movimentação do Bispo: \n");
    while (bispo <= 5)
    {
       
        printf("Cima, direita!\n");
        bispo ++;
    }
    
    printf("\nMovimentação da Torre: \n");

    do
    {
        printf("Direita!\n");
        torre ++;
    } while (torre <= 5);

    printf("\nMovimentação da Rainha: \n");

    for(rainha; rainha <= 8; rainha++){
        printf("Esquerda!\n");
    }
    
    
    
    
    
    
    
    
    
    
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.



    return 0;
}
