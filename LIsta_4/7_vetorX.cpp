// 7. Leia um vetor de 20 posições e em seguida um valor X qualquer. Seu
// programa deverá fazer uma busca do valor de X no vetor lido e informar a
// posição em que foi encontrado ou se não foi encontrado.

// Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

// Variaveis
int Vetor[20];
int ValorX;
int QtasVezes;

// incio
int main(void)
{
    srand(time(0));
    system("cls");
    for (int i = 0; i < 20; i++)
    {
        Vetor[i] = rand() % 20;
        printf("%i\n", Vetor[i]);
    }
    printf("\nDigite um numero qualquer entre 1 e 20\n");
    scanf("%i", &ValorX);

    QtasVezes = 0;
    for (int i = 0; i < 20; i++)
    {
        if (ValorX == Vetor[i])
        {
            QtasVezes = QtasVezes + 1;
            printf("%i", Vetor[i]);
        }
    }
    printf("\nTotal de vezes em que o Numero aparece = %i", QtasVezes);
}