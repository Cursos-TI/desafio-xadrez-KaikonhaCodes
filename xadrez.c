#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int bispo = 1, torre = 1, rainha = 1, cavalo = 1; //define a variavel de cada peça do tabuleiro, será usado para testar a condição e fazer o devido loop.
    
    printf("Movimentação do Bispo: \n");
    while (bispo <= 5)
    {
       
        printf("Cima, direita!\n");
        bispo ++;
    }
//Roda 5 vezes o código "cima direita", e incrementa +1 a variavel bispo a cada vez que roda, atingindo o limite de 5, para de rodar    
    printf("\nMovimentação da Torre: \n");

    do
    {
        printf("Direita!\n");
        torre ++;
    } while (torre <= 5);
    //Roda 5 vezes o código "direita", e incrementa +1 a variavel torre a cada vez que roda, atingindo o limite de 5, para de rodar    
    printf("\nMovimentação da Rainha: \n");

    for(rainha; rainha <= 8; rainha++){
        printf("Esquerda!\n");
    }
    //Roda 8 vezes o código "esquerda", e incrementa +1 a variavel rainha a cada vez que roda, atingindo o limite de 8, para de rodar
    printf("\nMovimentação do Cavalo: \n");
    while (cavalo >= 1)
    {
        for (int i = 0; i < 2; i++)
        {
        printf("Cima\n");
        }
        cavalo--;
        printf("Direita\n");
    }
    //Roda o loop externo(while) 1 vez e i loop interno (for) 2 vezes, ambos definidos pelo numero da variavel + incremento ou decremento a cada vez que roda.

    

    return 0;
}
