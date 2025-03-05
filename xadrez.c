#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void funcaotorre(int movetorre)
{
    if(movetorre >= 5)
    {
        printf("Direita!\n");
        funcaotorre (movetorre - 1);
    }
} //Movimentação da torre em uma função de maneira recursiva

void funcaorainha(int moverainha)
{
    if(moverainha > 0)
    {
        printf("Esquerda!\n");
        funcaorainha (moverainha - 1);
    }
} //Movimentação da rainha em uma função de maneira recursiva

void funcaobispo(int movimentocima, int movimentodireita)
{
    int i = 0;
    while(i < movimentocima)
    {
        printf("Cima, ");
        int j = 0;
        while (j < movimentodireita)
        {
            printf("Direita!\n");
            j++;
        }
        i++;
    }
} //função da movimentação do bispo, com loops aninhados, cada vez que o loop externo rodar 1 vez, ele roda também o interno, até atingir o limite setado na hora de chamar a função na main




int main() {
    
    int bispo = 1, torre = 9, rainha = 8, cavalo = 1; //define a variavel de cada peça do tabuleiro, será usado para testar a condição e fazer o devido loop.
    
    printf("Movimentação bispo: \n");
    funcaobispo(5,1); //Movimentação do bispo em função com loops aninhados
       
    printf("\nMovimentação da torre: \n");
    
    funcaotorre(torre); //Movimentação da torre em função de maneira recursiva
    
    printf("\nMovimentação da Rainha: \n");
    
    funcaorainha(rainha); //Movimentação da rainha em função de maneira recursiva
    
   
   printf("\nMovimentação do Cavalo: \n");
    int i = 2, j = 1;
    
    while (i > 0 || j > 0)
    {
        if (i > 0)
        {
            printf("Cima\n");
            i--;
        }else if (j > 0)
        {
            printf("Direita!\n");
            printf("\n");
            j--;
        }
        
        
    }
    
   


    return 0;
}


