// Laís Lobato
/* 
Este programa lê uma quantidade indefinida mas limitada de valores reais positivos (um valor negativo 
é usado para indicar o fim da entrada de dados e não faz parte dos valores lidos), e armazene-os em 
um arranjo unidimensional. O número máximo de valores a ser lido é definido por um #define MAXLIDOS 10, 
mas o usuário pode digitar menos valores que esse máximo. Após a leitura, o programa deve calcular e 
imprimir na tela:
a) A média dos quadrados dos valores informados;
b) A média das raízes quadradas dos valores informados;
c) A quantidade de valores que estão entre as duas médias calculadas acima (incluindo os
extremos).
Entradas: valores reais positivos ou negativos;
Saída: média dos quadrados dos valores informados; média das raízes quadradas dos valores informados;
a quantidade de valores que estão entre as duas médias calculadas acima (incluindo os
extremos).
*/

// Declaração das bibliotecas
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAXLIDOS 10

int main()
{
    float listaNumeros[MAXLIDOS]; // Declaração da variável de entrada
    int cont=0, contQ=0, contR = 0; // Declaração das variáveis contadoras
    float mediaQuadrados = 0.0, mediaRaiz = 0.0; // Declaração das variáveis de saída do tipo float
    int valoresEntre = 0; // Declaração das variáveis de saída do tipo int

    printf("Entre os valores: ");

    // Armazena o número lido no arranjo listaNumeros, e interrompe a entrada de dados se o número lido for negativo
    for(cont = 0; cont < MAXLIDOS; cont++) {
        scanf("%f",&listaNumeros[cont]);
        if(listaNumeros[cont] < 0)
            break;
    }

    // Adiciona '\0' ao final do arranjo 
    listaNumeros[cont] = '\0';

    // Armazena a soma dos quadrados dos números lidos
    while(listaNumeros[contQ]) {
        mediaQuadrados += listaNumeros[contQ] * listaNumeros[contQ];
        contQ++;
    }
    
    // Armazena o valor da média dos quadrados dos números lidos
    mediaQuadrados = mediaQuadrados / contQ;

    // Armazena a soma das raízes dos números lidos
    while(listaNumeros[contR]) {
        mediaRaiz += sqrt(listaNumeros[contR]);
        contR++;
    }

    // Armazena o valor da média das raízes dos números lidos
    mediaRaiz = mediaRaiz / contR;

    // Se o número for maior que a média das raízes e menor que a média dos quadrados, aramzena esse número em valoresEntre
    for(cont = 0; listaNumeros[cont] != '\0'; cont++) {
        if((listaNumeros[cont] > mediaRaiz) && (listaNumeros[cont] < mediaQuadrados))
            valoresEntre++;
    }

    printf("Media quadrados: %f \n",mediaQuadrados);
    printf("Media raiz quadrada: %f \n",mediaRaiz);
    printf("Quantidade de valores entre as duas medias: %d \n",valoresEntre);

    return 0;
}