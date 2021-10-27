#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

// variaveis do muno
int op;

// Questao 1
int vet13[13], posix, posiy;
int somaxy;

// Questao 2
char vet[16], vetinver[16];
int vetult;

// Questao 3
char pimba;
float produto;
float quantidade;
float valor;
float total;

int main(void)
{

Menu:
    system("cls");
    printf("\n-------------------------------------------------");
    printf("\nMenu de opcoes:");
    printf("\nOP 1= Questao 1. ");
    printf("\nOP 2= Questao 2. ");
    printf("\nOP 3= Questao 3. ");
    printf("\nOP 4= Sair do sistema.");
    printf("\n-------------------------------------------------\n");
    scanf("%i", &op);
    if (op == 1)
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
            printf("\nSelecione o Numero X dentro do vetor: ");
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
            printf("\nSelecione o Numero Y dentro do vetor: ");
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

        printf("\nTecle para voltar ao Menu.....");
        getche();
        goto Menu;
    }

    if (op == 2)
    {
        system("cls");

        printf("\nValores\n");
        for (int i = 0; i < 16; i++)
        {
            vet[i] = rand() % 25 + 65;
            printf("Vetor[%i]= %c\n", i, vet[i]);
        }

        vetult = 15;
        for (int i = 0; i < 16; i++)
        {
            vetinver[i] = vet[vetult - i];
        }

        printf("\nValores invertidos\n");
        for (int i = 0; i < 16; i++)
        {
            printf("Vetor[%i] = %c\n", i, vetinver[i]);
        }

        printf("\nTecle para voltar ao Menu.....");
        getche();
        goto Menu;
    }

    if (op == 3)
    {
        do
        {
            system("cls");
            printf("\nDigite a quantidade do produto desejada ");
            scanf("%f", &quantidade);
            printf("\n Escolha o seu produtos ");
            printf("\n Cachorro quente - 100 - 1,20");
            printf("\n Bauru simples - 101 - 1,20");
            printf("\n Bauru com ovo - 102 - 1,50");
            printf("\n Hamburguer - 103 - 1,20");
            printf("\n cheeseburguer - 104 - 1,30");
            printf("\n Refrigerante - 105 - 1,00\n");
            scanf("%f", &produto);

            if (produto == 100)
            {
                valor = 1.20;
            }
            if (produto == 101)
            {
                valor = 1.30;
            }
            if (produto == 102)
            {
                valor = 1.50;
            }
            if (produto == 103)
            {
                valor = 1.20;
            }
            if (produto == 104)
            {
                valor = 1.30;
            }
            if (produto == 105)
            {
                valor = 1.00;
            }

            total = quantidade * valor;

            printf("\nVoce ira pagar um total de R$%.2f ", total);

            printf("\nDeseja fazer esta opecao denovo? <S> ou <N>\n");
            pimba = getche();
            pimba = toupper(pimba);
        } while (pimba != 'N');
        printf("\nTecle para voltar ao Menu.....");
        getche();
        goto Menu;
    }

    if (op == 4)
    {
        printf("tecle para sair.");
        printf("Saindo do sistema....");
        getche();
    }
}