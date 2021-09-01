/*4 – Algoritmo 3 Menores
Faça um algoritmo que leia 3 números inteiros e imprima o menor deles.*/

// Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>

// variaveis e vetores

int N1, N2, N3;
int Vetor[3];
int Menor;
int op;
int aux; //renomear eles

int main(void)
{
menu:
    printf("\n Options meunu ");
    printf("\n 1 - Var N1 - N2 - N3");
    printf("\n 2 - Var Vetor[3]");
    printf("\n 3 - Leave");
    printf("\n Type Option: ");
    scanf("%d", &op);

    if (op == 1)
    {
        printf("\n Type N1 Value: ");
        scanf("%i", &N1);
        printf("\n Type N2 Value: ");
        scanf("%i", &N2);
        printf("\n Type N3 Value: ");
        scanf("%i", &N3);

        Menor = N1;

        if (N2 < Menor)
        {
            Menor = N2;
        }
        if (N3 < Menor)
        {
            Menor = N3;
        }
        printf("\n Lowest number: %d", Menor);
        printf("\n Type Enter to return ");
        system("pause");
        goto menu;
    }

    if (op == 2)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("\n Type vetor[%d] : ", i + 1);
            scanf("%d", &Vetor[i]);
        }

        for (int i = 0; i < 3; i++)
        {
            for (int isec = 0; isec < 3; isec++)
            {
                if (Vetor[i] < Vetor[isec])
                {
                    aux = Vetor[i];
                    Vetor[i] = Vetor[isec];
                    Vetor[isec] = aux;
                }
            }
        }
        printf("\n Lowest vector: %d", Vetor[0]);
        printf("\n Type Enter to go to menu \n ");
        system("pause");
        goto menu;
    }
    if (op == 3)
    {
        exit(0);
    }
}