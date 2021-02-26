// Laís Lobato
/* 
Este programa lê o comprimento e a largura de um quarto, e calcula o número de lâmpadas necessárias para iluminar adequadamente o quarto.
Entradas: largura do quarto, comprimento do quarto, potência das lâmpadas
Saída: número de lâmpadas 
*/

#include <stdio.h>

int main()
{
    float larguraQuarto, comprimentoQuarto, potenciaLampadas; //Declaração das variáveis de entrada
    int numeroLampadas; //Declaração da variável de saída

    printf("Entre com a largura e o comprimento do quarto: \n");
    scanf("%f%f", &larguraQuarto, &comprimentoQuarto);

    printf("Entre com a potencia das lampadas: \n");
    scanf("%f", &potenciaLampadas);

    numeroLampadas = (larguraQuarto * comprimentoQuarto) / (potenciaLampadas / 16); //Armazena o resultado em numeroLampadas

    printf("Numero de lampadas necessarias: %d \n", numeroLampadas); //Exibe o resultado de numeroLampadas na tela

    return 0;
}


  if ((toupper(tatuagem) == 'N') && (peso >= 50) && (idade >= 18 && idade <= 69) && (idade <= 18 && toupper(autorizacao) == 'S')) {
        printf("Voce esta apto a doar sangue. \n");
    } else {
        printf("Voce nao esta apto a doar sangue. \n");
    }
