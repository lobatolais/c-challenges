// Laís Lobato
/* 
Este programa lê um valor x do teclado e faz consistencia desse valor com o intervalo [-1.0 , 1.0] 
(O programa encerra se o valor lido não for válido). Em seguida, calcula o valor aproximado da 
função nesse ponto x, parando de incluir termos quando o valor do termo a ser incluído (em módulo) 
for menor do que uma tolerância tol a ser lida do usuário, imprimindo o valor calculado na tela.
Entrada: valor x do teclado; tolerancia(tol) definida pelo usuário;
Saída: valor aproxima da função nesse ponto x;
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// função para definir um valor absoluto (pedi ajuda para um veterano para definir essa função, pois não estava conseguindo chamar ela)
float abso(float x)
{
 if (x>0)
  return x;
 else
  return -x;
}

int main()
{
    float valorX, tol;
    float resultado=0,x0,x1,x2; 
    int sinal = 1, i = 1;

    printf("Entre com o valor de x: \n");
    scanf(" %f", &valorX);

    printf("Entre com o valor de tolerancia: \n");
    scanf(" %f", &tol);

    if (valorX >= -1 && valorX <= 1) { // se o valor de x estiver no intervalo [-1 , 1]
        while(abso((pow(valorX,i)/(i*(i+1)))) >= tol) {
            resultado += sinal * pow(valorX,i)/(i*(i+1));
            i = i + 2;
            sinal = sinal * (-1); }
    } else {
        printf("Valor de x fora do intervalo!"); //encerra o programa
    }

    printf("O resultado foi %f \n",resultado); 

    return 0;
}
