// Laís Lobato
/* Este programa executa uma função void que recebe como entrada um número real r, uma aproximação inicial x0 
para sua raiz cúbica, e uma tolerância t(valor real estritamente positivo). A função calcula e imprime na tela
uma aproximação da raiz cúbica de r.*/

// declaração das bibliotecas
#include <stdio.h>
#include <ctype.h>
#include <math.h>

// função que calcula a raiz cúbica
void calculaRaizCub(float r, float x0, float t) {
    float xn=0;

    do {
        xn = x0 - (pow(x0, 3) - r) / (3 * pow(x0, 2));
        x0 = xn;
    } while(fabs(pow(xn, 3) - r) >= t);

    printf("A raiz cubica aproximada de %.4f eh %.7f", r, xn);
}

int main() {

    // declaração das variáveis de entrada e saída
    float r=0, x0=0, t=0; 
    float calcRaizCub;

    printf("Entre o valor de r: ");
    scanf("%f", &r);
    printf("Entre o valor de x0: ");
    scanf("%f", &x0);
    printf("Entre a tolerancia: ");
    scanf("%f", &t);

    // se o valor de tolerância informado for menor que 0
    if (t <= 0) {
        printf("Erro! Tolerancia menor que 0.\n");
    } else { // se não, chama a função calculaRaizCub
        calculaRaizCub(r, x0, t);
    }

    return 0;
}
