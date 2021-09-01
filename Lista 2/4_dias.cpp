/* 4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de
vida ela possui. Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma
pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ
VIVEU 6935 DIAS */
// 1 ano = 365 dias

// Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

// Variaveis
char Name;
int Age;
int Days;

main()
{
    printf("\n What's your name? ");
    scanf("%s", &Name);

    printf("\n How old are you? ");
    scanf("%i", &Age);

    Days = Age * 365;

    printf("\n You already lived for %i days! ", Days);

    printf("\n\n");

    system("pause");
}