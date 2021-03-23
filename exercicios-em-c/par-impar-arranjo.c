// Laís Lobato
/* 
Inicialize um arranjo unidimensional com TAMAX elementos (TAMMAX é um número par dado 
através de um #define), considerando que o usuário deve inserir obrigatoriamente a mesma quantidade 
de números pares e ímpares na leitura, em uma ordem qualquer. 
Este programa gera um segundo arranjo com mesmo tamanho, invertendo a ordem dos elementos da seguinte 
maneira: no lugar dos números pares colocar os ímpares e vice-versa, respeitando a ordem no qual foram 
inseridos. Ao final, o programa deve imprimir os dois vetores.
Entradas: número de elementos total do arranjo inicial(TAMMAX == número par); quantidade de números pares;
quantidade de números ímpares
Saída: novo arranjo que inverte os números pares e ímpares, respeitando a ordem no qual foram inseridos;
*/

// Declaração das bibliotecas
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define TAMMAX 10 // Variável simbólica

int main()
{
    int arranjoInicial[TAMMAX]; // Declaração da variável de entrada
    int arranjoPares[TAMMAX / 2], arranjoImpares[TAMMAX / 2]; // Declaração das variáveis auxiliares
    int cont=0, contPares=0, contImpares=0; // Declaração das variáveis contadoras
     int arranjoFinal[TAMMAX]; // Declaração da variável de saída

    printf("Arranjo de entrada: ");

    for (cont=0; cont < TAMMAX; cont++) {
        scanf("%d", &arranjoInicial[cont]); // Armazena os números inseridos no arrranjoInicial
    } 

    for(cont=0; cont < TAMMAX; cont++) {
        // Se o número lido do arranjoInicial for par, armazena o número no arranjoPares
        if(arranjoInicial[cont] % 2 == 0) {
            arranjoPares[contPares] = arranjoInicial[cont];
            contPares++;
        } 
        // Se o número lido do arranjoInicial for ímpar, armazena o número no arranjoImpares
        else {
            arranjoImpares[contImpares] = arranjoInicial[cont];
            contImpares++;
        }
    }

    // Reinicia as variáveis em 0 para um novo for
    contPares=0;
    contImpares=0;

    for(cont=0; cont < TAMMAX; cont++) {
        // Se o número lido do arranjoInicial for par, armazena um número ímpar no arranjoFinal
        if(arranjoInicial[cont] % 2 == 0) {
            arranjoFinal[cont] = arranjoImpares[contImpares];
            contImpares++;
        } 
        // Se o número lido do arranjoInicial for ímpar, armazena um número par no arranjoFinal
        else {
            arranjoFinal[cont] = arranjoPares[contPares];
            contPares++;
        }
    }
    
    printf("Arranjo de saida: \n");
    // Imprime a ordem final no arrranjoFinal
    for(cont=0; cont < TAMMAX; cont++) {
        printf("%d  ", arranjoFinal[cont]);
    }

    return 0;
}
