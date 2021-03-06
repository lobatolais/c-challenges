// Laís Lobato
/* 
Este programa identifica o mês de pagamento do IPVA de um carro, baseado no número
finalizador da placa do veículo.
Entrada: Número da placa do veículo(composta por quatro dígitos, ignorando as letras);
Saída: Mês de vencimento do IPVA deste veículo;
*/

#include <stdio.h>

int main()
{
    int placaNumero; // Declaração da variável de entrada

    printf("Entre com a placa: \n");
    scanf("%d", &placaNumero);
    
    if(placaNumero < 1000 || placaNumero > 9999) { // Se o número da placa não tiver 4 dígitos, imprime "Erro"
        printf("Erro");
    } else {   
        switch(placaNumero % 10) { // Utiliza a operação de resto da divisão para saber o número finalizador da placa
            case 0: 
            printf("Mes de vencimento Outubro");
            break;

            case 1: 
            printf("Mes de vencimento Janeiro");
            break;

            case 2: 
            printf("Mes de vencimento Fevereiro");
            break;

            case 3: 
            printf("Mes de vencimento Marco");
            break;

            case 4: 
            printf("Mes de vencimento Abril");
            break;

            case 5: 
            printf("Mes de vencimento Maio");
            break;

            case 6: 
            printf("Mes de vencimento Junho");
            break;

            case 7: 
            printf("Mes de vencimento Julho");
            break;

            case 8: 
            printf("Mes de vencimento Agosto");
            break;

            case 9: 
            printf("Mes de vencimento Setembro");
            break;
        }
    }

    return 0;
}