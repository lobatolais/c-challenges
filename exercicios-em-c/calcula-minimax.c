// Laís Lobato
/* 
Este programa lê um inteiro N no intervalo [3 , 9] e gera uma matriz quadrada de 
dimensão NxN com elementos aleatórios no intervalo [1 , 30]. Após a geração da 
matriz o programa imprime na tela a matriz gerada e calcula e imprime o elemento
"minimax".
Entradas: inteiro N no intervalo [3 , 9] (dimensão da matriz); 
Saída: matriz quadrada com elementos aleatórios no intervalo [1 , 30]; elemento 
minimax da matriz;
*/

// Declaração das bibliotecas
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>

// Declaração das variáveis simbólicas
#define MIN 1
#define MAX 30

int main() {

    int N; // Declaração da variável de entrada
    int numRandom=0, numMaior=0, rowMax=0, colMax=0;// Declaração das variáveis auxiliares
    int row=0, col=0; // Declaração das variáveis contadoras
    int minimax=0; // Declaração das variáveis de saída

    srand(time(NULL));

    // Solicita a entrada com a dimensão da matriz enquanto N está fora do intervalo [3 , 9]
    do {
        printf("Entre com a dimensao da matriz: ");
        scanf(" %d", &N);
    } while(N > 9 || N < 3);

    int matriz[N][N];

    // Processamento de dados na matriz
    for(row = 0; row < N; row++) {
        for(col = 0; col < N; col++) {
            numRandom = MIN + (rand() % (MAX - MIN + 1)); // Gera um número aleatório 
            matriz[row][col] = numRandom; 
            printf("%3d ", matriz[row][col]); // Retorna a matriz de N dimensão, com os números aleatórios alocados
        }
        printf("\n");
    }
    
    // Encontra e armazena o maior número da matriz
    for(row = 0; row < N; row++) {
        numMaior = matriz[0][0]; //Inicia com o primeiro elemento da matriz
        for(col = 0; col < N; col++) {
            if(numMaior < matriz[row][col]) {
                numMaior = matriz[row][col];
                rowMax = row;
                colMax = col;
            }
        }
    }

    minimax = matriz[rowMax][0]; //Inicia com o primeiro elemento da linha

    // Encontra e armazena o menor valor da linha 
    for(col = 1; col < N; col++) {
        if(minimax > matriz[rowMax][col]) {
            minimax = matriz[rowMax][col];
        } 
    }
    
    printf("\nO elemento minimax da matriz vale %d \n\n", minimax);

    return 0;
}