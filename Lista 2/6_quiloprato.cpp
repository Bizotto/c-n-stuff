// 6. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um
// algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar.
// Assume que a balança já desconte o peso do prato.

#include <conio.h>
#include <stdio.h>
#include <iostream>

float QuiloComida, ValFinal;
char pimba;

int main(void)
{
    do
    {
        system("cls");
        printf("\nQuantidade de quilos no prato do cliente:\n");
        scanf("%f", &QuiloComida);

        ValFinal = QuiloComida * 12.00;

        printf("\nO valor final a ser pago pelo cliente R$%.2f, e ele consumiu %.2f Quilos de comida.\n", ValFinal, QuiloComida);
        printf("\nDeseja fazer a operacao novamente? <S> ou <N>\n");
        pimba = getche();
        pimba = toupper(pimba);
    } while (pimba != 'N');
    system("cls");
}