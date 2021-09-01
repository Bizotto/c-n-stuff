/*Construa um vetor de 5 posições com valores inteiros e na 
sequência localize o maior velor e seu índice e o menor valor e
seu índice. 
Primeiramente entre com os valores, mostre o vetor original e 
na sequência localize o maior e o menor mostrando eles na tela com 
seu respctivo índice. */

#include <conio.h>
#include <stdio.h>
#include <iostream>

int vetor[5], Menor, Maior;
char pimba;

int main(void)
{
    do
    {
        system("cls");
        printf("\nDe a entrada de valores do vetores:\n");
        for (int i = 0; i < 5; i++)
        {
            printf("\nDigite o valor inteiro de cada um dos 5 vetores[%i]", i);
            scanf("%i", &vetor[i]);
        }
        Menor = vetor[0];
        Maior = vetor[0];
        for (int i = 0; i < 5; i++)
        {
            if (Menor > vetor[i])
            {
                Menor = vetor[i];
            }
            if (Maior < vetor[i])
            {
                Maior = vetor[i];
            }
        }
        printf("\nO maior numero do vetor e:%i\n", Maior);
        printf("\nO menor numero do vetor e:%i\n", Menor);

        printf("\nDeseja fazer a aporecao novamente? <S> ou <N>");

        pimba = getche();
        pimba = toupper(pimba);
    } while (pimba != 'N');
    system("cls");
}