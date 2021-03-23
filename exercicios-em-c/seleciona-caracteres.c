// Laís Lobato
/* 
Este programa lê os inputs de caracteres do teclado e retorna o número de caracteres 
em minúsculo e o número de caracteres em maiúsculo informados. O programa para 
quando o usuário digitar '!'.
Entrada: caracteres do teclado;
Saída: número de caracteres em minúsculo; número de caracteres em maiúsculo;
*/

#include <stdio.h>
#include <math.h>

// variáveis simbólicas
#define A 65
#define Z 90
#define a 97
#define z 122

int main()
{
    char inputTeclado; // variável de entrada
    int n=1; //variável contador
    int maiusculo=0, minusculo=0; // variáveis de saída

    do {
        printf("Entre com o %do caractere: \n", n);
        scanf(" %c", &inputTeclado);  

        if (inputTeclado >= A && inputTeclado <= Z) { 
            maiusculo++; // armazena o número de caracteres maiúsculos
        } else if (inputTeclado >= a && inputTeclado <= z) {
            minusculo++; // armazena o número de caracteres minúsculos
        }
        n++;
    } while (inputTeclado != '!'); // encerra o programa

    printf("Voce digitou %d caracteres em minusculo e %d em maiúsculo.", minusculo, maiusculo);

    return 0; 
}
