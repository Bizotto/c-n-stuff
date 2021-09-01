/*4 - Algoritmo 3 Menores
Fa�a um algoritmo que leia 3 n�meros inteiros e imprima o menor deles.

Algoritmo Menor

variaveis
N1,N2,N3,Menor tipo inteiro


inicio

 escreva("Digite o valor de N1: ");
 leia(N1);
 escreva("Digite o valor de N2: ");
 leia(N2);
 escreva("Digite o valor de N3: ");
 leia(N3);
 
Menor = N1; 
 
se (N2 < Menor) entao{
 Menor=N2; }

se (N3 < Menor) ent�o{
Menor = N3; }

escreva("N1:",N1,"N2:",N2,"N3:",N3);
escreva(" O menor valor :", Menor) }

  
fim algoritmo */

//Codifica��o do algortimo em linguagem C

//chamada das Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>

//variaveis
int N1, N2, N3, Menor; //valores inteiros

main()
{                                    //inicio
    setlocale(LC_ALL, "portuguese"); //para usar acentua��o e � no c�digo

    //entrada de dados
    printf("Digite o valor de N1: ");
    scanf("%d", &N1); //d - decimal inteiro

    printf("Digite o valor de N2: ");
    scanf("%i", &N2); //i = inteiro

    printf("Digite o valor de N3: ");
    scanf("%i", &N3);

    //processamento para descobrir o menor n�mero

    Menor = N1; //atribui��o - atrubuindo o valor de N1 para a vari�vel Menor

    if (N2 < Menor)
    { //comando de condi��o - if(se)
        Menor = N2;
    }

    if (N3 < Menor)
    {
        Menor = N3;
    }

    //mostrar os valores e o menor

    printf("N1: %i  , N2: %i  , N3: %i", N1, N2, N3);
    printf("\n O menor valor �: %i", Menor);

    printf("\n \n"); //pula duas linhas

    system("pause"); //precionar qualquer tecla para continuar

} //fim algoritmo
