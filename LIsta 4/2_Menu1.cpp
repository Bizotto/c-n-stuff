// 2 - Desenvolver um programa que tenha um menu de:
// 2.1 - Entrada de dados dos vetores VetorA[5] e VetorB[5] com valores inteiros;
// 2.2 - Soma dos elementos dos dois vetores gerando o VetorSoma[5];
// 2.3 – Subtração dos elementos dos dois vetores gerando o VetorSoma[5];
// 2.4 - Multiplicação dos elementos dos dois vetores gerando o VetorMulti[5];
// 2.5 – Divisão dos elementos dos dois vetores gerando o VetorDivi[5];
// 2.6 - Sair do Sistema

// Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>

// Variaveis
int Vetor;
int VetorA[5], VetorB[5], VetorSoma[5];
int VetorMulti[5], VetorDiv[5], VetorSub[5];
int op;

// Codigo
int main(void)
{
    system("cls");
Menu:
    printf("____________________________________________\n");
    printf("Menu de Opcoes para os Vetores A e B.\n");
    printf("1- Gera a soma dos Vetores.\n");
    printf("2- Gera a subitracao dos Vetores.\n");
    printf("3- Gera a Multiplicacao dos Vetores.\n");
    printf("4- Gera a divisao dos Vetores.\n");
    printf("5- Sair do Sistema\n");
    printf("____________________________________________\n");
    scanf("%i", &op);

    if (op == 1)
    {
        system("cls");
        for (int i = 0; i < 5; i++)
        {
            printf("Digite 5 numeros para continuar (VetorA[%i]):\n", i);
            scanf("%i", &VetorA[i]);
        }
        system("cls");
        for (int i = 0; i < 5; i++)
        {
            printf("Digite 5 numeros para continuar (VetorB[%i]):\n", i);
            scanf("%i", &VetorB[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            VetorSoma[i] = VetorA[i] + VetorB[i];
        }

        for (int i = 0; i < 5; i++)
        {
            printf("VetorA = %i\n", VetorA[i]);
        }

        printf("\n\n");

        for (int i = 0; i < 5; i++)
        {
            printf("VetorB = %i\n", VetorB[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            printf("A soma intercalada dos 5 vetores= %i\n", VetorSoma[i]);
        }

        printf("Tecle para voltar ao Menu.....");
        getche();
        goto Menu;
    }

    if (op == 2)
    {
        system("cls");

        for (int i = 0; i < 5; i++)
        {
            printf("Digite 5 numeros para continuar (VetorA[%i]):\n", i);
            scanf("%i", &VetorA[i]);
        }

        system("cls");

        for (int i = 0; i < 5; i++)
        {
            printf("Digite 5 numeros para continuar (VetorB[%i]):\n", i);
            scanf("%i", &VetorB[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            VetorSub[i] = VetorA[i] - VetorB[i];
        }

        for (int i = 0; i < 5; i++)
        {
            printf("VetorA = %i\n", VetorA[i]);
        }

        printf("\n\n");

        for (int i = 0; i < 5; i++)
        {
            printf("VetorB = %i\n", VetorB[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            printf("A Subtracao intercalada dos 5 vetores= %i\n", VetorSub[i]);
        }

        printf("Tecle para voltar ao Menu.....");
        getche();
        goto Menu;
    }

    if (op == 3)
    {
        system("cls");

        for (int i = 0; i < 5; i++)
        {
            printf("Digite 5 numeros para continuar (VetorA[%i]):\n", i);
            scanf("%i", &VetorA[i]);
        }

        system("cls");

        for (int i = 0; i < 5; i++)
        {
            printf("Digite 5 numeros para continuar (VetorB[%i]):\n", i);
            scanf("%i", &VetorB[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            VetorMulti[i] = VetorA[i] * VetorB[i];
        }

        for (int i = 0; i < 5; i++)
        {
            printf("VetorA = %i\n", VetorA[i]);
        }

        printf("\n\n");

        for (int i = 0; i < 5; i++)
        {
            printf("VetorB = %i\n", VetorB[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            printf("A multiplicacao intercalada dos 5 vetores= %i\n", VetorMulti[i]);
        }

        printf("Tecle para voltar ao Menu.....");
        getche();
        goto Menu;
    }

    if (op == 4)
    {
        system("cls");

        for (int i = 0; i < 5; i++)
        {
            printf("Digite 5 numeros para continuar (VetorA[%i]):\n", i);
            scanf("%i", &VetorA[i]);
        }

        system("cls");

        for (int i = 0; i < 5; i++)
        {
            printf("Digite 5 numeros para continuar (VetorB[%i]):\n", i);
            scanf("%i", &VetorB[i]);
        }
        for (int i = 0; i < 5; i++)
        {
            VetorDiv[i] = VetorA[i] / VetorB[i];
        }

        for (int i = 0; i < 5; i++)
        {
            printf("VetorA = %i\n", VetorA[i]);
        }

        printf("\n\n");

        for (int i = 0; i < 5; i++)
        {
            printf("VetorB = %i\n", VetorB[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            printf("A divisao intercalada dos 5 vetores= %i\n", VetorDiv[i]);
        }

        printf("Tecle para voltar ao Menu.....");
        getche();
        goto Menu;
    }

    if (op == 5)
    {
        printf("tecle para sair.");
        printf("Saindo do sistema....");
        getche();
    }
}