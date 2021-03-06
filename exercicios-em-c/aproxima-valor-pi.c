// Laís Lobato
/* 
Este programa aproxima o valor de pi com uma série finita.
Entrada: Número de termos que o usuário deseja aproximar pi (o número mínimo de termos é 2);
Saída: Valor de pi calculado de acordo com a fórmula acima; Número de termos definido pelo usuário;
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int numeroTermos; // Declaração da variável de entrada (e saída)
    double somaTermos; // Declaração da variável acumuladora
    int cont; // Declaração da variável contadora
    double valorPi; // Declaração da variável de saída 
    
    printf("Entre com o número de termos para cálculo do PI: \n");
    scanf("%d", &numeroTermos); // Armazena o número de termos definido pelo usuário

    if (numeroTermos < 2) { // Se o número de termos for menos que dois, imprime "Entre com um número de termos válido"
        printf("Entre com um número de termos válido");
    } else {
        for (cont = 0; cont < numeroTermos; cont++) {
            if (cont % 2 == 0) {
                somaTermos = somaTermos + 1.0 / (2 * cont + 1); 
            } else {
                somaTermos = somaTermos - 1.0 / (2 * cont + 1);
            }
            valorPi = 4 * somaTermos;
        }
        printf("Valor de PI com %d termos: %lf \n", numeroTermos, valorPi);
    } 

    return 0;
}
