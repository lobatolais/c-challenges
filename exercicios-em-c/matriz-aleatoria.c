// Laís Lobato
/* 
Este programa preenche uma matriz de dimensão 4x4 com números aleatórios no intervalo [2 , 40], e imprime
a matriz obtida na tela. Em seguida imprime dois arranjos unidimensionais gerados a partir dessa matriz: 
um arranjo com os maiores elementos de cada coluna e um arranjo com os menores elementos de cada linha.
Entradas: números aleatórios;
Saída: matriz 4x4; arranjo com os maiores elementos de cada coluno; arranjo com os menores elementos de
cada linha;
*/

// Declaração das bibliotecas
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 

// Declaração das variáveis simbólicas
#define ROWCOL 4
#define MIN 2
#define MAX 40

int main()
{
    int matriz[ROWCOL][ROWCOL]; // Declaração da variável de entrada
    int row=0, col=0; // Declaração das variáveis contadoras
    int numRandom=0, valMaior=0, valMenor=0; // Declaração das variáveis auxiliares
    int colMaiores[ROWCOL], rowMenores[ROWCOL]; // Declaração das variáveis de saída

    srand(time(NULL));

    // Processamento de dados na matriz
    printf("Matriz:\n");

    for(row = 0; row < ROWCOL; row++) {
        for(col = 0; col < ROWCOL; col++) {
            numRandom = MIN + (rand() % (MAX - MIN + 1)); // Gerador do número aleatório entre 2 e 40
            matriz[row][col] = numRandom; // Armazena número aleatório gerado em uma posição da matriz
            printf("%3d ", matriz[row][col]);
        }
        printf("\n");
    }

    // Imprime um arranjo com os maiores elementos de cada coluna
    printf("\nArranjo maiores elementos colunas: \n");
    for(col = 0; col < ROWCOL; col++) {
        valMaior = matriz[0][col]; //Inicia com o primeiro elemento de cada coluna
        for(row = 1; row < ROWCOL; row++) {
            if(valMaior < matriz[row][col]) {
                valMaior = matriz[row][col];
            } 
        }
        colMaiores[ROWCOL] = valMaior;
        printf("%3d",  colMaiores[row]);
    }

    // Imprime um arranjo com os menores elementos de cada linha
    printf("\n\nArranjo menores elementos linhas: \n");
    for(row = 0; row < ROWCOL; row++) {
        valMenor = matriz[row][0]; //Inicia com o primeiro elemento de cada coluna
        for(col = 1; col < ROWCOL; col++) { 
                if(valMenor > matriz[row][col]) {
                    valMenor = matriz[row][col];
                }
        }
        rowMenores[ROWCOL] = valMenor;
        printf("%3d", rowMenores[col] );
    }
    printf("\n\n");

    return 0;
}



