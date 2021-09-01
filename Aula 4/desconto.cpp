/*Construir um algoritmo que leia o valor de compra de um cliente e 
calcule o % de desconto conforme:
- Valor até R$ 100,00 - 10% desconto
- Valor até R$ 101,00 até R$ 150,00 - 15% desconto
- Valor até R$ 151,00 até R$ 200,00 - 20% desconto
- Valor até R$ 201,00 até R$ 300,00 - 30% desconto
- Valor até R$ 301,00 até R$ 400,00 - 40% desconto
- Valor até R$ 401,00 até qualquer outro valor  - 50% desconto
presente o nome do cliente, CPF, fone,e o valor da compra, o % de desconto e o valor total.*/

// Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>

// variaveis
char Nome_Cliente[30];
char CPF[14];
int Fone;
float Valor_compra;
// variaveis de processamento
float perc_desconto;
float total_Pago;

int main(void)
{
    printf("\n Clients Name: ");
    scanf("%s", &Nome_Cliente);

    printf("\n Registration: ");
    scanf("%s", &CPF);

    printf("\n Phone number: ");
    scanf("%i", &Fone);

    printf("\n client spent: ");
    scanf("%f", &Valor_compra);

    if (Valor_compra <= 100.00)
    {
        perc_desconto = Valor_compra * 0.10;
        total_Pago = Valor_compra - perc_desconto;
    }

    if (Valor_compra >= 101.00 && Valor_compra <= 150.00); //101 a 150
    {
        perc_desconto = Valor_compra * 0.15;
        total_Pago = Valor_compra - perc_desconto;
    }

    if (Valor_compra >= 151.00 && Valor_compra <= 200.00);
    {
        perc_desconto = Valor_compra * 0.20;
        total_Pago = Valor_compra - perc_desconto;
    }

    if (Valor_compra >= 201.00 && Valor_compra <= 300.00);
    {
        perc_desconto = Valor_compra * 0.30;
        total_Pago = Valor_compra - perc_desconto;
    }

    if (Valor_compra >= 301.00 && Valor_compra <= 400.00);
    {
        perc_desconto = Valor_compra * 0.40;
        total_Pago = Valor_compra - perc_desconto;
    }

    if (Valor_compra >= 401.00 && Valor_compra <= 500.00);
    {
        perc_desconto = Valor_compra * 0.50;
        total_Pago = Valor_compra - perc_desconto;
    }

    printf("\n Clients name: %s", Nome_Cliente);

    printf("\n Registration: %s", CPF);

    printf("\n Phone number: %i", Fone);

    printf("\n Total spent: %.2f", Valor_compra);

    printf("\n Your discount  %.2f", perc_desconto);

    printf("\n Your total is %f $", total_Pago);

    printf("\n\n");

    system("pause");
}
