#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#define navio 3

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
            int tabuleiro[10][10];

               for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
   }           
         int linhaH = 0, colunaH = 0; 
         int linhaV = 7, colunaV = 0; 

    // Posicionamento do navio horizontal
        for (int i = 0; i < navio; i++) {
        tabuleiro [linhaH][colunaH + i] = navio;
    }
    // Posicionamento do navio vertical
        for (int i = 0; i < navio; i++) {
        tabuleiro [linhaV + i][colunaV] = navio;
    }
 // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.    
             
          int linhaDiagonal1 = 7, colunaDiagonal1 = 7;
        int linhaDiagonal2 = 0, colunaDiagonal2 = 9;

    // Posicionamento dos navios na diagonal principal
        for (int i = 0; i < navio; i++) {
        tabuleiro [linhaDiagonal1 + i][colunaDiagonal1 + i] = navio;
    }
    // Posicionamento dos navios na diagonal secundária
        for (int i = 0; i < navio; i++) {
        tabuleiro [linhaDiagonal2 + i][colunaDiagonal2 - i] = navio;
    }
 // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
         int cone = 1;
    // Inicializar a matriz com loops aninhados e condicionais para o padrão de cone
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            // Condicional para determinar se a posição está afetada pelo cone
            if ((i == 1 && j == 2) ||
                ((i == 2 || i == 2) && j >= 1 && j <= 3) ||
                (i == 3 && j >= 0 && j <= 4)) {
                tabuleiro[i][j] = cone;
            } 
        }
    }  
    // Inicializar a matriz com loops aninhados e condicionais para o padrão de octaedro
         int octaedro = 2;

    for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
    // Condicional para determinar se a posição está afetada pelo octaedro
        if((i == 7 && j == 3) ||
           (i == 8 && (j >= 2 && j <= 4)) ||
           (i == 9 && j == 3)) {
            tabuleiro[i][j] = octaedro;
        }
    }
}

    // Exibição do tabuleiro completo
    printf("\nTABULEIRO BATALHA NAVAL:\n\n");

    for (int i = 0; i < 10 ; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
