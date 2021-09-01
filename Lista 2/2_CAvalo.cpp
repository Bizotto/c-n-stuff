/*2. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
cavalos comprados para um haras.*/

//cavalos
//cada cavalo tem 4 patas logo x4

#include <conio.h>
#include <iostream>
#include <stdio.h>
#include <locale.h>

//variaveis

float cavalos;
int ferraduras;
//float NuNferraduras;

main()
{

        setlocale(LC_ALL, "Portuguese");

        printf("\n\n Quantidade de cavalos no estabulo : ");

        scanf("%f", &cavalos);

        ferraduras = cavalos * 4;

        printf("\n A quantidade de ferraduras: %i", ferraduras);

        printf("\n\n");

        system("pause");
}