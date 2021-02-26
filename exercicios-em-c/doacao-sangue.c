// Laís Lobato
/* 
Este programa informa na tela se a pessoa pode doar sangue ou não. Para que uma pessoa seja doadora de sangue, é necessário que todas as condições abaixo sejam satisfeitas:
- Não ter feito tatuagem nos últimos 12 meses
- Peso no mínimo de 50kg
- Idade entre 16 e 69 anos (para menores de idade, autorização dos responsáveis é necessária)
Entradas: tatuagem nos últimos 12 meses; peso; idade (quando se tratar de menor de idade, perguntar se possui autorização);
Saída: resultado da aptidão para doar sangue;
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char tatuagem, autorizacao; // Declaração das variáveis de entrada do tipo char
    int peso, idade; // Declaração das variáveis de entrada do tipo int

    //entrada 
    printf("Voce fez tatuagem nos ultimos 12 meses? (S/N) \n");
    scanf(" %c", &tatuagem);

    printf("Qual o seu peso? \n");
    scanf("%d", &peso);
    
    printf("Qual a sua idade? \n");
    scanf("%d", &idade);
    
    //condicional para menores de idade
    if (idade < 18) {
        printf("Voce eh menor de idade. Tem autorizacao dos pais? (S/N) \n");
        scanf(" %c", &autorizacao);
    }

    //processamento e saída
    if ((toupper(tatuagem) == 'N') && (peso >= 50) && (idade >= 18 && idade <= 69) || (idade >= 16 && idade < 18) && (toupper(autorizacao) == 'S')) {
        printf("Parabens! Voce pode ser doador!");
    } else {
        printf("Voce NAO pode ser doador!");
    }
    
    return 0;
}
