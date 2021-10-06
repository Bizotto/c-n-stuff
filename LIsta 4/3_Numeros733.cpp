// 3 - Escreva um programa que leia 733 números aleatórios de 0 até 300 e
// imprima o maior deles e quantas vezes o maior número foi lido, apresentando
// este e suas respectivas posições.

// Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

// Variavies
int Numeros[733];
int maior;
int qtsvezes;

int main(void)
{
    srand(time(0));
    for (int i = 0; i < 733; i++)
    {
        Numeros[i] = rand() % 301;
    }

    maior = Numeros[0];

    for (int i = 0; i < 733; i++)
    {
        if (Numeros[i] > maior)
        {
            maior = Numeros[i];
        }
    }
    for (int i = 0; i < 733; i++)
    {
        if (Numeros[i] == maior)
        {
            qtsvezes++;
            printf("\nMaior numero [%i] que esta no vetor %i", Numeros[i], i);
        }
    }
    printf("\nApareceram %i vezes o numero %i", qtsvezes, maior);
}