// Laís Lobato
/* Este programa converte temperaturas de graus centígrados para fahrenheit e vice-versa. O programa tem um menu de opções 
implementado como uma função void e mais duas funções void que calculam as conversões de temperaturas.
Entradas: uma das opções do menu;
Saída: temperatura convertida;
*/

// declaração das bibliotecas
#include <stdio.h>

// converte temperatura de Celsius para Fahrenheit
void celsiusToFahren() { 
    float celsius, fahren;

    printf("Entre com a temperatura em graus Celsius: ");
    scanf("%f", &celsius);
    fahren = (9 * celsius / 5) + 32;
    printf("Temperatura equivalente em Fahrenheit: %.2f\n", fahren);
}

// converte temperatura de Fahrenheit para Celsius
void fahrenToCelsius() { 
    float celsius, fahren;

    printf("Entre com a temperatura em graus Fahrenheit: \n");
    scanf("%f", &fahren);
    celsius = 5 * ((fahren - 32) / 9);
    printf("Temperatura equivalente em Celsius: %.2f\n", celsius);
}

// imprime o menu de opções
void menuOpcoes() { 
    int opcao;

    do {
    printf("\nEntre com uma das opcoes: \n1 - Converte centigrados para fahrenheit \n2 – Converte fahrenheit para centigrados \n3 - Sair \n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1) { // se a opção selecionada for 1
        celsiusToFahren(); // chama a função celsiusToFahren
    } else if (opcao == 2) { // se a opção selecionada for 1
        fahrenToCelsius(); // chama a função fahrenToCelsius
    } else if (opcao !=3) { // se a opção selecionada não for uma opção válida
        printf("Essa opcao nao eh valida \n"); // imprime que a opção não é válida
    }
    } while (opcao != 3); // executa o código enquanto a opção não é 3
}

int main() {

    menuOpcoes(); // imprime o menu de opções

    return 0;
}
