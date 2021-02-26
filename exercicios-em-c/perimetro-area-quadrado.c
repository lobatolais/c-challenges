// Laís Lobato
/* 
Este programa lê do teclado o raio de um círculo, e calcula o perímetro e a área do maior quadrado inscrito nesse círculo.
Entradas: valor do raio
Saída: lado do maior quadrado, perímetro do maior quadrado, área do maior quadrado
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float raioCirculo; //Declaração da variável de entrada
    float ladoQuadrado, perimetroQuadrado, areaQuadrado; //Declaração das variáveis de saída

    printf("Entre com um valor para o raio: \n");
    scanf("%f", &raioCirculo);
    
    ladoQuadrado = (2 * raioCirculo) / sqrt(2); //Armazena resultado do lado do maior quadrado
    perimetroQuadrado = ladoQuadrado * 4; //Armazena resultado do perímetro do maior quadrado
    areaQuadrado = pow(ladoQuadrado, 2); //Armazena resultado da área do maior quadrado

    printf("Perimetro do maior quadrado: %.2f \n", perimetroQuadrado); //Exibe o resultado do perímetro do maior quadrado na tela
    printf("Area do maior quadrado: %.2f \n", areaQuadrado); //Exibe o resultado da área do maior quadrado na tela

    return 0;
}