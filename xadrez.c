/*
 * ====================================
 * Desafio de Xadrez - MateCheck
 * ====================================
 * Descrição: Implementação de movimentação de peças de xadrez usando
 *            estruturas de repetição (for, while, do-while), loops aninhados
 *            e funções recursivas conforme especificado nos três níveis
 *            do desafio (Novato, Aventureiro e Mestre).
 *
 * Requisitos implementados:
 * - Nível Novato: Estruturas de repetição básicas
 * - Nível Aventureiro: Loops aninhados obrigatórios
 * - Nível Mestre: Funções recursivas e loops com variáveis múltiplas
 */

#include <stdio.h>

// Constantes para definir o número de movimentos de cada peça
#define BISHOP_MOVES 5      // Bispo: 5 casas
#define ROOK_MOVES 5        // Torre: 5 casas
#define QUEEN_MOVES 8       // Rainha: 8 casas
#define KNIGHT_VERTICAL 2   // Cavalo: 2 casas verticais
#define KNIGHT_HORIZONTAL 1 // Cavalo: 1 casa horizontal

/**
 * Move o bispo recursivamente na diagonal superior direita.
 * Cada movimento na diagonal equivale a um movimento para direita
 * seguido de um movimento para cima.
 *
 * @param remaining: Número de casas restantes para mover
 */
void moveBishopRecursive(int remaining) {
    // Caso base: quando não há mais movimentos restantes
    if (remaining == 0) {
        return;
    }
    // Movimento diagonal = direita + cima
    printf("Direita\n");
    printf("Cima\n");
    // Chamada recursiva com uma casa a menos
    moveBishopRecursive(remaining - 1);
}

/**
 * Move a torre recursivamente para a direita.
 * A torre se move apenas horizontalmente neste desafio.
 *
 * @param remaining: Número de casas restantes para mover
 */
void moveRookRecursive(int remaining) {
    // Caso base: quando não há mais movimentos restantes
    if (remaining == 0) {
        return;
    }
    printf("Direita\n");
    // Chamada recursiva com uma casa a menos
    moveRookRecursive(remaining - 1);
}

/**
 * Move a rainha recursivamente para a esquerda.
 * A rainha se move apenas horizontalmente neste desafio.
 *
 * @param remaining: Número de casas restantes para mover
 */
void moveQueenRecursive(int remaining) {
    // Caso base: quando não há mais movimentos restantes
    if (remaining == 0) {
        return;
    }
    printf("Esquerda\n");
    // Chamada recursiva com uma casa a menos
    moveQueenRecursive(remaining - 1);
}

/**
 * Imprime um separador visual formatado com um título.
 * Melhora a legibilidade da saída do programa.
 *
 * @param title: Título a ser exibido no separador
 */
void printSeparator(const char* title) {
    printf("\n========== %s ==========\n\n", title);
}

/**
 * NÍVEL NOVATO
 * Implementa a movimentação das peças usando três estruturas de repetição diferentes:
 * - FOR: Para o movimento do Bispo
 * - WHILE: Para o movimento da Torre
 * - DO-WHILE: Para o movimento da Rainha
 *
 * Este nível demonstra o conhecimento básico de estruturas de repetição.
 */
void beginnerLevel() {
    printSeparator("NIVEL NOVATO");

    // === MOVIMENTO DO BISPO ===
    // Utiliza estrutura FOR para movimentar o bispo 5 casas na diagonal superior direita
    // Movimento diagonal = combinar direita + cima a cada iteração
    printf("Bispo: 5 casas na diagonal superior direita\n");
    for (int i = 0; i < BISHOP_MOVES; i++) {
        printf("Direita\n");
        printf("Cima\n");
    }

    // === MOVIMENTO DA TORRE ===
    // Utiliza estrutura WHILE para movimentar a torre 5 casas para a direita
    // A condição é verificada antes de cada iteração
    printf("\nTorre: 5 casas para a direita\n");
    int count = 0;
    while (count < ROOK_MOVES) {
        printf("Direita\n");
        count++;
    }

    // === MOVIMENTO DA RAINHA ===
    // Utiliza estrutura DO-WHILE para movimentar a rainha 8 casas para a esquerda
    // A condição é verificada após cada iteração (executa pelo menos uma vez)
    printf("\nRainha: 8 casas para a esquerda\n");
    int queenCount = 0;
    do {
        printf("Esquerda\n");
        queenCount++;
    } while (queenCount < QUEEN_MOVES);
}

/**
 * NÍVEL AVENTUREIRO
 * Implementa a movimentação do cavalo em L usando LOOPS ANINHADOS (obrigatório).
 * - Loop externo (FOR): Controla o movimento vertical
 * - Loop interno (WHILE): Controla o movimento horizontal
 *
 * O cavalo se move em formato de L: 2 casas verticais e 1 casa horizontal.
 * Os loops são aninhados para demonstrar a dependência entre movimentos.
 */
void adventurerLevel() {
    printSeparator("NIVEL AVENTUREIRO");

    // === MOVIMENTO DO CAVALO EM L ===
    // Usa loops aninhados obrigatoriamente conforme especificação
    printf("Cavalo: Movimento em L (2 casas para baixo e 1 casa para esquerda)\n");

    // Loop externo (FOR): itera pelos movimentos verticais
    for (int vertical = 0; vertical < KNIGHT_VERTICAL; vertical++) {
        printf("Baixo\n");

        // Loop interno (WHILE): para cada movimento vertical,
        // executa o movimento horizontal (aninhamento obrigatório)
        int horizontal = 0;
        while (horizontal < KNIGHT_HORIZONTAL) {
            printf("Esquerda\n");
            horizontal++;
        }
    }
}

/**
 * NÍVEL MESTRE
 * Implementa a movimentação das peças usando técnicas avançadas:
 * - Funções RECURSIVAS para Bispo, Torre e Rainha
 * - Loop com VARIÁVEIS MÚLTIPLAS e uso de BREAK e CONTINUE para o Cavalo
 *
 * Este nível demonstra domínio de estruturas complexas usadas no mercado.
 */
void masterLevel() {
    printSeparator("NIVEL MESTRE");

    // === MOVIMENTO DO BISPO (RECURSIVO) ===
    // Chama função recursiva que move o bispo 5 casas na diagonal
    printf("Bispo: 5 casas na diagonal direita para cima (recursivo)\n");
    moveBishopRecursive(BISHOP_MOVES);

    // === MOVIMENTO DA TORRE (RECURSIVO) ===
    // Chama função recursiva que move a torre 5 casas para a direita
    printf("\nTorre: 5 casas para a direita (recursivo)\n");
    moveRookRecursive(ROOK_MOVES);

    // === MOVIMENTO DA RAINHA (RECURSIVO) ===
    // Chama função recursiva que move a rainha 8 casas para a esquerda
    printf("\nRainha: 8 casas para a esquerda (recursivo)\n");
    moveQueenRecursive(QUEEN_MOVES);

    // === MOVIMENTO DO CAVALO (LOOP COM VARIÁVEIS MÚLTIPLAS + BREAK/CONTINUE) ===
    // Utiliza um loop FOR com múltiplas variáveis de controle (vertical e horizontal)
    // Demonstra o uso de break e continue conforme especificado
    printf("\nCavalo: 1 vez em L para cima a direita (loops com break/continue)\n");

    // Loop com declaração de múltiplas variáveis e condições múltiplas
    for (int vertical = 0, horizontal = 0;
         vertical < KNIGHT_VERTICAL || horizontal < KNIGHT_HORIZONTAL;) {

        // Primeiro executa os movimentos verticais
        if (vertical < KNIGHT_VERTICAL) {
            printf("Cima\n");
            vertical++;

            // Uso de CONTINUE: pula para próxima iteração quando completa movimentos verticais
            if (vertical == KNIGHT_VERTICAL && horizontal < KNIGHT_HORIZONTAL) {
                continue;
            }
        }

        // Depois executa os movimentos horizontais
        if (horizontal < KNIGHT_HORIZONTAL) {
            printf("Direita\n");
            horizontal++;

            // Uso de BREAK: sai do loop quando completa todos os movimentos
            if (horizontal == KNIGHT_HORIZONTAL) {
                break;
            }
        }
    }
}

/**
 * FUNÇÃO PRINCIPAL
 * Executa os três níveis do desafio em sequência:
 * 1. Nível Novato: Estruturas de repetição básicas
 * 2. Nível Aventureiro: Loops aninhados
 * 3. Nível Mestre: Funções recursivas e loops avançados
 *
 * @return 0 indica execução bem-sucedida
 */
int main() {
    // Cabeçalho do programa
    printf("\n");
    printf("====================================\n");
    printf("   DESAFIO DE XADREZ - MATECHECK   \n");
    printf("====================================\n");

    // Executa os três níveis do desafio
    beginnerLevel();    // Nível 1: Estruturas de repetição básicas
    adventurerLevel();  // Nível 2: Loops aninhados obrigatórios
    masterLevel();      // Nível 3: Recursão e loops avançados

    // Encerramento do programa
    printSeparator("FIM");

    return 0; // Retorna 0 indicando sucesso
}
