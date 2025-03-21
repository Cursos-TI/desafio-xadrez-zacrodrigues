#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int qtdLimiteMovimentoBispo = 5, qtdLimiteMovimentoTorre = 5, qtdLimiteMovimentoRainha = 8;
    int qtdCasasPecorridasTorre = 0, qtdCasasPecorridasRainha = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("*** Movimentação do Bispo ***\n");

    for (int i = 0; i < qtdLimiteMovimentoBispo; i++)
    {
        printf("Cima Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\n*** Movimentação da Torre ***\n");

    while (qtdCasasPecorridasTorre < qtdLimiteMovimentoTorre)
    {
        printf("Direita\n");
        qtdCasasPecorridasTorre++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\n *** Movimentação da Rainha ***\n");

    do
    {
        printf("Esquerda\n");
        qtdCasasPecorridasRainha++;
    } while (qtdCasasPecorridasRainha < qtdLimiteMovimentoRainha);

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
