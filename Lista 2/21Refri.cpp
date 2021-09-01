// 21. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml,
// garrafa de 600 ml e garrafa de 2 litros. Se um comerciante compra uma determinada
// quantidade de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele
// comprou.

#include <conio.h>
#include <iostream>
#include <stdio.h>

char pimba;
float Quantidade, ValorTotal[10], Coca, LitrosFim;
int op, i;

int main(void)
{
    system("cls");
    do
    {
        printf("\n-------------------------------------------------");
        printf("\nDigite a quantidade de Refri que foi comprada:\n");
        scanf("%f", &Quantidade);
        printf("\n-------------------------------------------------");
        printf("\nDigite o Codigo do item comprado:");
        printf("\n1= Coca-cola Lata");
        printf("\n2= Coca-cola 600");
        printf("\n3= Coca-cola 2 Litros");
        printf("\n-------------------------------------------------\n");
        scanf("%i", &op);
        if (op == 1)
        {
            Coca = 0.35;
        }
        if (op == 2)
        {
            Coca = 0.6;
        }                                                  //🎧😎
        if (op == 3)
        {
            Coca = 2;
        }
        i = i + 1;

        ValorTotal[i] = Coca * Quantidade;

        LitrosFim = LitrosFim + ValorTotal[i];

        printf("\n Cliente comprou algum outro item? <S> ou <N>\n");
        pimba = getche();
        pimba = toupper(pimba);
    } while (pimba != 'N');
    system("cls");
    printf("\n-------------------------------------------------\n");
    printf("Valor em litros comprados: %.2f Litros ", LitrosFim);
    printf("\n-------------------------------------------------\n");
}