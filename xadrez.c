#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void mover_torre(int casas)
{
    if (casas > 0)
    {
        printf("Direita\n");
        mover_torre(casas - 1);
    }
}
void mover_bispo(int casas)
{
    if (casas > 0)
    {
        for (int i = 0; i < 1; i++) // Corrigido para executar apenas uma vez
        {
            printf("Cima\n");
            while (i == 0) // Mantém o loop enquanto i for 0
            {
                printf("Direita\n");
                i++; // Incrementa i para sair do loop
            }
        }
        mover_bispo(casas - 1);
    }
}

void mover_rainha(int casas)
{
    if (casas > 0)
    {
        printf("Esquerda\n");
        mover_rainha(casas - 1);
    }
}
void mover_cavalo(int casas)
{
    int movimentos_cima = 0; // Contador para controlar os movimentos para cima

    while (casas > 0) // Controla o número de casas
    {
        if (movimentos_cima < 2) // Sobe no máximo 2 vezes
        {
            printf("Cima\n");
            movimentos_cima++;
            casas--; // Reduz o número de casas restantes
            continue;
        }

        printf("Direita\n"); // Após subir 2 vezes, vira para a direita
        casas--;             // Reduz o número de casas restantes
        break;               // Sai do loop após completar o movimento
    }
}
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
    int const torre = 5, bispo = 5, rainha = 8, cavalo = 3; // Quantidade de casas por peça.
    printf("********** Movimentacao da Torre **********\n");
    mover_torre(torre);
    printf("********** Movimentacao do Bispo **********\n");
    mover_bispo(bispo);
    printf("********** Movimentacao da Rainha **********\n");
    mover_rainha(rainha);
    printf("********** Movimentacao do Cavalo **********\n");
    mover_cavalo(cavalo);
    return 0;
}
