#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    int i;
    int const torre = 5, bispo = 5, rainha = 8; // Quantidade de casas por peça.
    printf("********** Movimentacao da Torre **********\n");
    for (i = 0; i < torre; i++)
    {
        printf("Direita\n");
    }
    i = 0; // Reseta variável de controle.
    printf("********** Movimentacao do Bispo **********\n");
    while (i < bispo)
    {
        printf("Cima, Direita\n");
        i++;
    }
    i = 0; // Reseta variável de controle.
    printf("********** Movimentacao da Rainha **********\n");
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < rainha);

    return 0;
}
