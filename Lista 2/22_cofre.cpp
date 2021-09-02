// 22. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu
// poupar. Faça um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor
// total economizado, em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e
// ainda moedas de 1 real. Não havendo moeda de um tipo, a quantidade respectiva é zero.

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>
// 0.01 0.05 0.10 0.25 0.50 1.00
// variaveis

float To1, To5, To10, To25, To50, To100;
float Mo1, Mo5, Mo10, Mo25, Mo50, Mo100;
char pimba;
float Valorfim;

int main(void)
{
    do
    {
        system("cls");
        printf("\nQuantas moeadas de 1 centavo foram postas?");
        scanf("%f", &Mo1);

        printf("\nQuantas moeadas de 5 centavos foram postas?");
        scanf("%f", &Mo5);

        printf("\nQuantas moeadas de 10 centavos foram postas?");
        scanf("%f", &Mo10);

        printf("\nQuantas moeadas de 25 centavos foram postas?");
        scanf("%f", &Mo25);

        printf("\nQuantas moeadas de 50 centavos foram postas?");
        scanf("%f", &Mo50);

        printf("\nQuantas moeadas de 1 real foram postas?");
        scanf("%f", &Mo100);

        To1 = Mo1 * 0.01;
        To5 = Mo5 * 0.05;
        To10 = Mo10 * 0.10;
        To25 = Mo25 * 0.25;
        To50 = Mo50 * 0.50;
        To100 = Mo100 * 1.00;

        Valorfim = To1 + To5 + To10 + To25 + To50 + To100;

        printf("\n%.2f", Valorfim);

        printf("\nDeseja fazer o calculo novamente? <S><N>");
        pimba = getche();
        pimba = toupper(pimba);

    } while (pimba != 'N');
}