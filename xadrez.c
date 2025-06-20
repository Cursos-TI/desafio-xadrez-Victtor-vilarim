#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças

    // Implementação de Movimentação do Bispo
    printf("Bispo: \n");
    for (int bispo = 0; bispo < 5; bispo++)
    {
        printf("Cima e ");
        printf("Direita\n");
    }

    // Implementação de Movimentação da Torre
    printf("\nTorre: \n");
    int torre = 0;
    do
    {
        printf("Direita\n");
        torre++;
    } while (torre < 5);

    // Implementação de Movimentação da Rainha
    printf("\nRainha: \n");
    int rainha = 0;
    while (rainha < 7)
    {
        printf("Direita\n");
        rainha++;
    }

    return 0;
}
