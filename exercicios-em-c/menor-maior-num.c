// Laís Lobato
/* 
Este programa que lê números inteiros do usuário até que o usuário digite 9999. Retornando na tela o
o menor e o maior valor lido. 
Entrada: números inteiros;
Saída: menor valor lido; maior valor lido;
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int numero; // variável de entrada
    int n=0; // variável contador
    int maiorNumero, menorNumero; // variável de saída

    printf("Entre com um número inteiro: \n");
    scanf("%d", &numero);

    if (numero == 9999) {
        printf("Nao ha valores para informar. \n");
    } else {
        // atribui-se ao valor do primeiro numero lido como maior e menor
        maiorNumero = numero; 
        menorNumero = numero;
        do {
            printf("Entre com um número inteiro: \n");
            scanf("%d", &numero);
                if (numero > maiorNumero && numero != 9999) {
                    maiorNumero = numero;
            }  else {
                if (numero < menorNumero && numero != 9999) {
                    menorNumero = numero;
                }
            }
        } while (numero != 9999);

        printf("O maior valor vale %d e o menor valor vale %d \n", maiorNumero, menorNumero);
    }

    return 0;
}