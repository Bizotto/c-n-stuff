// 01 - Leia um vetor de 13 posições com valores inteiros e em seguida leia
// também dois valores X e Y quaisquer correspondentes a duas posições no vetor.
// Ao final seu programa deverá escrever as posições, os valores contidos nestas
// posições e a soma dos valores encontrados nas respectivas posições X e Y.
// Importante observar que o vetor tem somente 13 posições, então os
// valores de X e Y não podem ser maiores que o maior índice do vetor. Desta
// forma realizar o controle para que caso os usuários digitem um valor para
// X e Y fora destes índices, que seja pedido novamente. (4,0)

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

int vet13[13], posix, posiy;
int somaxy;

int main(void)
{
    srand(time(0));
    system("cls");
    for (int i = 0; i < 13; i++)
    {
        vet13[i] = rand() % 100;
        printf("\n Vetor[%i]= %i", i, vet13[i]);
    }
    do
    {
        printf("\nSelecione o Numero X dentro do vetor ");
        scanf("%i", &posix);
        if ((posix < 0) || (posix > 12))
        {
            system("cls");
            printf("\nDigito invalido. ");
            printf("\nDigite um numero entre 0 e 12. ");
        }
    } while ((posix < 0) || (posix > 12));

    do
    {
        printf("\nSelecione o Numero Y dentro do vetor ");
        scanf("%i", &posiy);
        if ((posiy < 0) || (posiy > 12))
        {
            system("cls");
            printf("\nDigito invalido. ");
            printf("\nDigite um numero entre 0 e 12. ");
        }
    } while ((posiy < 0) || (posiy > 12));

    somaxy = vet13[posiy] + vet13[posix];
    printf("\nO resultado da soma dos vetores X e Y = %i", somaxy);
}