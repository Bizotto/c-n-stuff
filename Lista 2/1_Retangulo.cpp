/*1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno.*/

//bibliotecas 
#include<conio.h>
#include<stdio.h>
#include<iostream>

//variaveis
float LadoA;  //⊙.☉
float LadoB;
float AreaRE;

main(){
    printf("\n Valor da lateral do retangulo LadoA: ");
        scanf("%f",& LadoA);

    printf("\n Valor da lateral do retangulo LadoB: ");
        scanf("%f",& LadoB);

    AreaRE = LadoA * LadoB; 

        printf("\n\n A area do terreno e %f", AreaRE);

            printf("\n\n");
            
system("pause");
}
