// Laís Lobato
/* 
Este programa sorteia um número inteiro no intervalo [1, 10]. Após o sorteio, o usuário deve tentar 
adivinhar o número que foi sorteado.  Caso o usuário acerte o número em menos de 5 tentativas, o 
programa imprime a mensagem: “Parabéns! Você acertou o número em XX tentativas” (XX corresponde ao 
número de tentativas). Caso o usuário não acertou, o programa deverá comparar o número sorteado com o 
número fornecido pelo usuário e imprimir uma mensagem adequada de acordo se o número for maior ou menor 
do que o valor sorteado.
Entradas: possível número sorteado;
Saída: mensagem conforme palpite do usuário;
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
#define MAX 10 

int main()
{
    int numSorteado, numChute;  // Declaração da variável de entrada
    int tentativa=1; // Declaração da variável contadora
    
    // Inicializa o gerador de números aleatórios, e a cada execução o valor da "semente" será diferente.
    srand(time(NULL));
    numSorteado =  MIN + (rand() % (MAX - MIN + 1));

    // Processa a entrada do usuário
    do
    {
        printf("Digite seu chute: ");
        scanf("%d", &numChute);
        
        // Se o número de chute, for maior que o número sorteado pelo computador
        if(numChute > numSorteado) {
            printf("Seu chute eh maior que o valor sorteado!\n"); 
            tentativa++;
        }
        // Se o número de chute, for menor que o número sorteado pelo computador
        else if(numChute < numSorteado) {
            printf("Seu chute eh menor que o valor sorteado!\n"); 
            tentativa++;
        // Quando o número de chute for igual ao número sorteado
        } else {
            printf("Parabens! Voce acertou em %d tentativa(s)!\n", tentativa);
        }
    } while(numChute != numSorteado && tentativa < 6);

    // Se o número de tentativas ultrapassar o número máximo de 5 tentativas
    if (tentativa >= 6) {
        printf("Voce ultrapassou o numero maximo de tentativas!\n"); 
    }

    return 0;
}
