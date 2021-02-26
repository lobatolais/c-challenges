/* 
Este programa pega dois decimais, os soma e exibe o resultado na tela
Entradas: dois valores decimais (lidos via teclado)
Saída: a soma dos dois valores lidos
*/
#include <stdio.h>

int main()
{
    float val1, val2; //Declaração das variáveis de entrada
    float soma; //Declaração da variável com o resultado da soma

    printf("Valor do primeiro termo da soma: \n");
    scanf("%f", &val1);

    printf("Valor do segundo termo da soma: \n");
    scanf("%f", &val2);

    soma = val1 + val2; //Armazena resultado em soma

    printf("Resultado da soma: %f \n", soma); //Exibe o resultado da soma na tela
    return 0;
}
