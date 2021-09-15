// 6. Leia um vetor de 16 posições e troque os 8 primeiros valores pelos 8 últimos
// e vice-e-versa. Escreva ao final o vetor obtido.

// bibliotecas
#include <iostream>
#include <conio.h>
#include <stdio.h>

int vetor1[8];
int vetor2[8];
int op;
// char pimba;

int main(void)
{
    for (int i = 0; i < 8; i++)
    {
        printf("\nDigite o numero do indice[%i]= ", i);
        scanf("%i", &vetor1[i]);
    }

    for (int i = 0; i < 8; i++)
    {
        printf("\nDigite o numero do indice[%i]= ", i);
        scanf("%i", &vetor2[i]);
    }

    printf("Op = 1(Os 8 primeiros vao para os oito finais) ");
    scanf("%i", &op);

    if (op == 1)
    {
        for (int i = 0; i < 8; i++)
        {
            printf("\n  %i", vetor2[i]);
        }
        for (int i = 0; i < 8; i++)
        {
            printf("\n%i    ", vetor1[i]);
        }
        printf("\nDigite 2 para fazer o inverso... ");


        scanf("%i", &op);
        if (op == 2)
        {
            for (int i = 0; i < 8; i++)
            {
                printf("\n  %i", vetor1[i]);
            }
            for (int i = 0; i < 8; i++)
            {
                printf("\n%i    ", vetor2[i]);
            }
        }
    }
}
