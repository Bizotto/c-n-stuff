#include <conio.h>
#include <stdio.h>
#include <iostream>

char Codigo, Op2;
int op, i;
float PrecoItem, Quantidade, precoTotal[10], PrecoFinal;

int main(void)
{
    do
    {
        printf("\n======================================================");
        printf("\nDigite a quantidade que foi comprada pelo cliente: \n");
        scanf("%f", &Quantidade);
        printf("======================================================");
        printf("\nDigite o codigo do produto comprado:");
        printf("\n1= 1001(R$5,32)");
        printf("\n2= 1324(R$6,45)");
        printf("\n3= 6548(R$2,37)");
        printf("\n4= 0987(R$5,32)");
        printf("\n5= 7623(R$6,45)");
        printf("\n======================================================\n");
        scanf("%i",&op);
        if (op == 1)
        {
            PrecoItem = 5.32;
        }
        if (op == 2)
        {
            PrecoItem = 6.45;
        }
        if (op == 3)
        {
            PrecoItem = 2.37;
        }
        if (op == 4)
        {
            PrecoItem = 5.32;
        }
        if (op == 5)
        {
            PrecoItem = 6.45;
        }
        i = i + 1;
        precoTotal[i] = PrecoItem * Quantidade;

        PrecoFinal = PrecoFinal + precoTotal[i];

        printf("\n Cliente comprou algum outro item? <S> ou <N>");
        Op2 = getche();
        Op2 = toupper(Op2);
    } while (Op2 != 'N');
    system("cls");
    printf("\n======================================================\n");
    printf("\nO valor total gasto pelo cliente foi o total de: R$ %.2f", PrecoFinal);
    printf("\n======================================================\n");
}