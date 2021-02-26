// Laís Lobato
/* 
Este programa lê o tempo de permanência(em minutos) em um estacionamento, e calcula o valor final a ser pago por esse tempo de utilização.
Entradas: tempo de permanência;
Saída: valor a ser pago;
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int tempoMinutos, tempoHoras; //Declaração da variável de entrada do tipo int
    float valorPago; //Declaração da variável de saída

    //entrada
    printf("Entre o tempo de permanencia em minutos: \n");
    scanf("%d", &tempoMinutos);

    //processamento e saída
    tempoHoras = round(tempoMinutos / 60); //Armazena o resultado da conversão de minutos para horas, arredondando os minutos para horas cheias

    if (tempoHoras < 1) {
        valorPago = 15;
        printf("O valor a ser pago eh de R$%.2f \n", valorPago);
    } else if (tempoHoras >= 8) {
        valorPago = 32;
        printf("O valor a ser pago eh de R$%.2f \n", valorPago);
    } else {
        valorPago = 15 + (2 * tempoHoras);
        printf("O valor a ser pago eh de R$%.2f \n", valorPago);
    }

    return 0;
}