// 11. Leia um vetor de 40 posições e acumule os valores do primeiro elemento
// no segundo, deste no terceiro e assim por diante. Ao final, escreva o vetor
// obtido.

// Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

// variaveis
int vetor[40];
int somavetor[40];

int main(void)
{
    srand(time(0));
    for (int i = 0; i < 40; i++)
    {
        vetor[i] = rand() % 100;
        printf("\n Valor %i Na posicao[%i]", vetor[i], i);
    }
    somavetor[0] = vetor[0];
    for (int i = 1; i < 40; i = i + 1)
    {
        somavetor[i] = somavetor[i - 1] + vetor[i];

        printf("\nO resultado da e %i", somavetor[i]);
    }
}