// Laís Lobato
/* Este programa recebe como entrada um número real x (assuma que x é positivo, não precisa validar) e um 
indicador (char L, ou Q). Se o indicador for L, retorna o maior número inteiro n tal que 0+1+2+···+n ≤ x. 
Se o indicador for Q, retorna o maior número inteiro n tal que 0ˆ2+1^2+2ˆ2 +···+nˆ2 ≤ x. Caso o indicador seja 
inválido, a função retorna valor -1. */ 

// declaração das bibliotecas
#include <stdio.h>
#include <ctype.h>
#include <math.h>

// calcula o valor de N com base no indicador informado
int calculaN(float valorX, char indicador) {
    int n=0;
    float soma=0;

    if (toupper(indicador) == 'L') { // se o indicador informado for L
        do {
            n++;
            soma = soma + n;
        } while (soma + n <= valorX);
    } else if (toupper(indicador) == 'Q') { // se o indicador informado for Q
        do {
            n++;
            soma = soma + pow(n, 2);
        } while (soma + pow(n, 2) <= valorX);
    } else { // se o indicador informado não for L nem Q
        n = -1;
    }
    return n;
}

int main() {

    // declaração das variáveis de entrada e saída
    int calcN;
    float valorX;
    char indicador;

    printf("Entre o valor de x: ");
    scanf("%f", &valorX);
    printf("\nEntre o indicador (L ou Q): ");
    scanf(" %c", &indicador);
    
    calcN = calculaN(valorX, indicador); // armazena a chamada da função na variável calcN

    if (calcN < 0) { // se o valor armazenado na variável for menor que 0
        printf("Codigo invalido!\n");
    } else { // se o valor armazenado na variável for maior ou igual a 0
        printf("O valor de n eh: %d\n", calcN);
    }

    return 0;
}
