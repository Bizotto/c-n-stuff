// Faça um programa que preencha uma matriz M (2x2), calcule e mostre sua matriz resultante da multiplicação dos elementos de M pelo seu maior elemento.
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

int matriz[2][2];
int op;
int multi[2][2];
int maior;

int main(void)
{
    srand(time(0));
    for (int c = 0; c < 2; c++)
    {
        for (int l = 0; l < 2; l++)
        {
            matriz[c][l] = rand() % 100;
        }
    }
menu:
    system("cls");
    printf("\n Opcoes de mostragem. ");
    printf("\n 1- Mostrar Matriz. ");
    printf("\n 2- Multiplicar matriz. ");
    printf("\n 3- Sair do sistemas. \n");
    scanf("%i", &op);

    if (op == 1)
    {
        system("cls");
        for (int c = 0; c < 2; c++)
        {
            for (int l = 0; l < 2; l++)
            {
                printf("\n Matrzi[%i][%i] = %i", c, l, matriz[c][l]);
            }
        }
        printf("\n Tecle para voltar ao menu.");
        getche();
        goto menu;
    }

    if (op == 2)
    {
        maior = 0;
        for (int c = 0; c < 2; c++)
        {
            for (int l = 0; l < 2; l++)
            {
                if (matriz[c][l] > maior)
                {
                    maior = matriz[c][l];
                }
            }
        }
        for (int c = 0; c < 2; c++)
        {
            for (int l = 0; l < 2; l++)
            {
                multi[c][l] = matriz[c][l] * maior;
            }
        }
        for (int c = 0; c < 2; c++)
        {
            for (int l = 0; l < 2; l++)
            {
                printf("\n Matriz[%i][%i] = %i ", c, l, multi[c][l]);
            }
        }
        printf("\n Tecle para voltar ao menu.");
        getche();
        goto menu;
    }
    if (op == 3)
    {
        exit(0);
    }
}
