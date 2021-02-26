/* 
Este programa pega três decimais, os soma e os multiplica, e exibe o resultado na tela
Entradas: três valores decimais (lidos via teclado)
Saídas: a soma e o produto dos três valores lidos
*/
#include <stdio.h>

int main()
{
    float val1, val2, val3; //Declaração das variáveis de entrada
    float soma; //Declaração da variável com o resultado da soma
    float produto; //Declaração da variável com o resultado do produto

    printf("Valor do primeiro termo da soma e do produto: \n");
    scanf("%f", &val1);

    printf("Valor do segundo termo da soma e do produto: \n");
    scanf("%f", &val2);

    printf("Valor do terceiro termo da soma e do produto: \n");
    scanf("%f", &val3);

    soma = val1 + val2 + val3; //Armazena resultado em soma
    produto = val1 * val2 * val3; //Armazena resultado em produto

    printf("Resultado da soma: %f \n", soma); //Exibe o resultado da soma na tela
    printf("Resultado do produto: %f \n", produto); //Exibe o resultado do produto na tela
    return 0;
}
