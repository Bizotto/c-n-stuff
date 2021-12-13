#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

float valor, result, valfinal;
char op;

int main(void)
{
    system("cls");
    printf("\n Digite o valor que deseja operar.\n");
    scanf("%f", &valor);
    fflush(stdin);

menu:
    system("cls");
    printf("\n====================================================");
    printf("\n Bem-vindo ao menu solicitado.");
    printf("\n Opcao A - 33,33%");
    printf("\n Opcao B - 50%");
    printf("\n Opcao C - 66,67%");
    printf("\n Opcao D - 100%");
    printf("\n Opcao E - Digitar um Novo Numero?");
    printf("\n====================================================\n");
    scanf("%c", &op);
    op = toupper(op);

    if (op == 'A')
    {
        result = valor * 33.333;
        valfinal = result / 100;

        printf("\n Resultado foi de %.2f.\n", valfinal);

        printf("\n Tecle para voltar ao menu.");
        getche();
        goto menu;
    }
    if (op == 'B')
    {
        result = valor * 50;
        valfinal = result / 100;

        printf("\n Resultado foi de %.2f.\n", valfinal);

        printf("\n Tecle para voltar ao menu.");
        getche();
        goto menu;
    }
    if (op == 'C')
    {
        result = valor * 66.667;
        valfinal = result / 100;

        printf("\n Resultado foi de %.2f.\n", valfinal);

        printf("\n Tecle para voltar ao menu.");
        getche();
        goto menu;
    }
}
