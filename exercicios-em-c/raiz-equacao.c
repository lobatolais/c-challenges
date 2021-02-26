// Laís Lobato
/* 
Este programa lê três valores de coeficientes para uma equação de segundo grau, em seguida calcula e imprime na tela a raiz ou raizes da equação(quando estas são passíveis de serem calculadas).
Entrada: valores dos coeficientes;
Saída: delta da equação; raízes da equação;
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float coeficienteA, coeficienteB, coeficienteC; //Declaração das variáveis de entrada
    float deltaEquacao, raizEquacao1, raizEquacao2; //Declaração das variáveis de saída

    //entrada
    printf("Entre com os valores dos coeficientes: \n");
    scanf("%f%f%f", &coeficienteA, &coeficienteB, &coeficienteC);

    //processamento e saída
    deltaEquacao = (pow(coeficienteB, 2)) - (4 * coeficienteA * coeficienteC); // Armazena o resultado do cálculo do delta da equação
    raizEquacao1 = ((coeficienteB * (-1)) + (sqrt(deltaEquacao))) / (2 * coeficienteA); // Armazena o resultado da primeira raiz da equação
    raizEquacao2 = ((coeficienteB * (-1)) - (sqrt(deltaEquacao))) / (2 * coeficienteA); // Armazena o resultado da segunda raiz da equação

    if (coeficienteA == 0) {
        printf("Nao eh equacao de segundo grau!");
    } else if (deltaEquacao < 0) {
        printf("Nao existe raiz real.");
    } else if (deltaEquacao == 0) {
        printf("Raiz unica: %.2f", raizEquacao1);
    } else if (deltaEquacao > 0) {
        printf("Duas raízes reais: r1:%.2f e r2:%.2f", raizEquacao1, raizEquacao2);
    }
    
    return 0;
}