// 03 O cardápio de uma lancheria é o seguinte:
// Especificação Código Preço
// Cachorro quente 100 1,20
// Bauru simples 101 1,30
// Bauru com ovo 102 1,50
// Hambúrguer 103 1,20
// Cheeseburguer 104 1,30
// Refrigerante 105 1,00
// Escrever um algoritmo que leia o código do item pedido, a quantidade e calcule
// o valor a ser pago por aquele lanche. Considere que a cada execução somente
// será calculado um item.(4,0)

#include <iostream>
#include <conio.h>
#include <stdio.h>

char pimba;
float produto;
float quantidade;
float valor;
float total;

int main(void)
{
    do{
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

}