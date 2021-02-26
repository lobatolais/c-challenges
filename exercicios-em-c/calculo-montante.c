// Laís Lobato
/* 
Este programa lê uma quantia inicial x, um percentual i e a quantidade de dias d da aplicação, e calcula o montante total ao final do período de n meses.
Entradas: quantia inicial x, percentual i, quantidade de dias d da aplicação
Saída: montante final
*/

#include <stdio.h>
#include <math.h>

int main()
{
   float inicialX, percentualI; //Declaração das variáveis de entrada float
   int diasD, mesesN; //Declaração das variáveis de entrada int
   float montanteFinal; //Declaração da variável de saída

    printf("Entre com uma quantia inicial: \n");
    scanf("%f", &inicialX);

    printf("Entre com um percentual: \n");
    scanf("%f", &percentualI);

    printf("Entre com o número de dias: \n");
    scanf("%d", &diasD);

    mesesN = diasD / 30; //Armazena o resultado da conversão do número de dias para meses
    montanteFinal = inicialX * pow((1 + percentualI / 100), mesesN); // Armazena o resultado em montanteFinal

    printf("Montante final: %.2f \n", montanteFinal); //Exibe o resultado de montanteFinal na tela

    return 0;
}