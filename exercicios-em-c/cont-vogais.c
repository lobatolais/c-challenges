// Laís Lobato
/* 
Este programa lê um string do usuário de comprimento máximo igual a 60 e cria outro string sem os 
espaços em branco, apresentando também o número de vogais presentes no string original, e imprimindo na
tela o novo string e o número de vogais.
Entradas: string do usuário de comprimento máximo igual a 60;
Saída: nova string sem os espaços em branco; número de vogais presentes no string original;
*/

// Declaração das bibliotecas
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define QUANT 60 // Variável simbólica

int main()
{
    char stringOrigem[QUANT]; // Declaração da variável de entrada
    int cont=0, contEspaco=0, contVogais=0; // Declaração das variáveis contadoras
    char stringFim[QUANT]; // Declaração da variável de saída

    puts("Entre com um string: ");
    fgets(stringOrigem, QUANT, stdin); // Permite colocar na variável todos os caracteres introduzidos, sem estar limitado a 1 palavra

    stringOrigem[strlen(stringOrigem)-1] = '\0'; // Retorna o tamanho de uma string, sem contar o ‘\0’

    // Percorre a string até chegar no '\0'
    while (stringOrigem[cont] != '\0') { 
        // Verifica se os caracteres são diferentes de 'espaço' dentro do intervalo da string (que é de 60) e copia esses caracteres para a nova string
        if (stringOrigem[cont] != ' ') {
            stringFim[contEspaco] = stringOrigem[cont];
            contEspaco++;
        }
        cont++;
    }

    printf("String sem espacos: %s \n", stringFim);

    // Verifica as vogais (maiúsculas e minúsculas) da string e incrementa o contador de vogais
    for(cont=0; cont < QUANT; cont++) {
        if (stringOrigem[cont] == 'A' || stringOrigem[cont] == 'a' || 
            stringOrigem[cont] == 'E' || stringOrigem[cont]== 'e' || 
            stringOrigem[cont] == 'I' || stringOrigem[cont]== 'i' || 
            stringOrigem[cont] == 'O' || stringOrigem[cont] == 'o' || 
            stringOrigem[cont] == 'U' || stringOrigem[cont] == 'u') {
            contVogais++;
        }
    }

    printf("Nro de vogais: %d", contVogais);

    return 0;
}