// 5. Declare um vetor de 10 posições e o preencha com os 10 primeiros
// números impares e o escreva.

// Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>

int vetor[10];

int main()
{
    system("cls");
    for (int i = 0; i < 10; i++)
    {
        printf("\nDigite os 10 primeiros numeros impares: ");
        printf("\nIndice %i= ",i);
        scanf("%i", &vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\nOs 10 primeiros numeros impares sao = %i\n", vetor[i]);
    }
    
}