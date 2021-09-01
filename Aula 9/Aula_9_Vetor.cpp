#include <conio.h>
#include <stdio.h>
#include <iostream>

int Vet1[10];
char pimba;
int aux;

int main(void)
{
    do
    {
        system("cls");
        printf("\n========================================================");
        printf("\nDe entrada nos valores do vetor");
        printf("\n========================================================");
        for (int i = 0; i < 10; i = i + 1)
        {
            printf("\nDigite o valor inteiro do vetor[%i]:", i);
            scanf("%i", &Vet1[i]);
        }
        printf("\n========================================================");
        printf("\nValores inteiros do vetor Original");
        printf("\n========================================================");
        for (int i = 0; i < 10; i = i + 1)
        {
            printf("\nvetor[%i] : %i", i, Vet1[i]);
        }

        printf("\n========================================================");
        printf("\nOrganizando o Vetor em Ordem Crescente...");

        for (int i = 0; i < 10; i = i + 1)
        {
            for (int Ie = 0; Ie < 10; Ie++)
            {
                if (Vet1[i] < Vet1[Ie])
                {
                    aux = Vet1[i];
                    Vet1[i] = Vet1[Ie];
                    Vet1[Ie] = aux;
                }
            }
        }

        printf("\nVetor em Ordem Crescente");

        for (int i = 0; i < 10; i++)
        {
            printf("\nVetor[%i]: %i", i, Vet1[i]);
        }
        printf("\n========================================================");
        printf("\nOrganizando o Vetor em Ordem Decrescente...");

        for (int i = 0; i < 10; i = i + 1)
        {
            for (int Ie = 0; Ie < 10; Ie++)
            {
                if (Vet1[i] > Vet1[Ie])
                {
                    aux = Vet1[i];
                    Vet1[i] = Vet1[Ie];
                    Vet1[Ie] = aux;
                }
            }
        }

        printf("\nVetor em Ordem Decrescente");
        printf("\n========================================================");
        for (int i = 0; i < 10; i++)
        {
            printf("\nVetor[%i]: %i", i, Vet1[i]);
        }

        printf("\n========================================================");
        printf("\nDeseja usar novos valores para este vetor? <S> ou <N>");
        pimba = getche();
        pimba = toupper(pimba);
    } while (pimba != 'N');
}
