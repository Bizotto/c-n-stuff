// 12.Faça um algoritmo para ler o salário de um funcionário e aumentá-lo em 15%. Após o
// aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o
// salário final.

#include <conio.h>
#include <stdio.h>
#include <iostream>

float Salario, Salfinal, Imposto, Aumento;

int main(void)
{
    system("cls");

    printf("Salario do funcionario: \n");
    scanf("%f", &Salario);

    Aumento = Salario * 1.15;

    Imposto = Aumento * 0.08;

    Salfinal = Aumento - (Imposto * 0.8);

    printf("Salario inicial de %.2f,Salario com aumento %.2f e o Salario final de %.2f.", Salario, Aumento, Salfinal);
}