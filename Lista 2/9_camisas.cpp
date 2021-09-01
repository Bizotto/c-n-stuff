// 9. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo
// vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário
// forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a
// máquina informe quanto será o valor arrecadado.

#include <conio.h>
#include <iostream>
#include <stdio.h>

int op, i;
float QTDcamisas, PrecoCamisa, PrecoTotal[30], PrecoFim; //10 12 15
char pimba;

int main(void)
{

    do
    {
        system("cls");
        printf("\n------------------------------------------------------------");
        printf("\nDigite a Quantidade de camisas que foi comprada pelo cliente:\n");
        scanf("%f", &QTDcamisas);
        printf("\n------------------------------------------------------------");
        printf("\nDigite o codigo da camisa comprada:");
        printf("\n1= Camisa pequena (R$10,00).");
        printf("\n2= Camisa media (R$12,00).");
        printf("\n3= Camisa grande (R$15,00).");
        printf("\n------------------------------------------------------------\n");
        scanf("%i", &op);

        if (op == 1)                                                                                                  //🎧😎
        {
            PrecoCamisa = 10.00;
        }
        if (op == 2)
        {
            PrecoCamisa = 12.00;
        }
        if (op == 3)
        {
            PrecoCamisa = 15.00;
        }
        i = i + 1;

        PrecoTotal[i] = PrecoCamisa * QTDcamisas;

        PrecoFim = PrecoFim + PrecoTotal[i];

        printf("\nCliente comprou algo a mais? <S> <N>");
        pimba = getche();
        pimba = toupper(pimba);
    } while (pimba != 'N');
    system("cls");
    printf("\n------------------------------------------------------------");
    printf("\nO valor gasto pelo cliente foi um total de : R$%.2f", PrecoFim);
    printf("\n------------------------------------------------------------");
}