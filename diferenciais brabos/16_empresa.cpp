// 16. Uma empresa concederá um aumento de salário aos seus funcionários,
// variável de acordo com o cargo, conforme a tabela abaixo. Faça um algoritmo
// que leia o salário e o cargo de um funcionário e calcule o novo salário. Se o
// cargo do funcionário não estiver na tabela, ele deverá, então, receber 40% de
// aumento. Mostre o salário antigo, o novo salário e a diferença.
//101  gerente 10%
// 102 engenheiro 20%
// 103 tecnico  30%

#include <conio.h>
#include <stdio.h>
#include <iostream>

float SalBase, CodCargo, Salfinal, Aumento;
char pimba;

int main(void)
{
    do
    {
        system("cls");
        printf("\n---------------------------------------------------------------");
        printf("\nQual o salario base do empregado?\n");
        scanf("%f", &SalBase);
        printf("\n---------------------------------------------------------------");
        printf("\nDigite o codigo do cargo");
        printf("\n101 = Gerente");
        printf("\n102 = Engenheiro");
        printf("\n103 = Tecnico");
        printf("\n100 = Outro Cargo");
        printf("\n---------------------------------------------------------------\n");
        scanf("%f", &CodCargo);

        if (CodCargo == 101)
        {
            Aumento = SalBase * 0.10;
        }

        if (CodCargo == 102)
        {
            Aumento = SalBase * 0.20;
        }

        if (CodCargo == 103)
        {
            Aumento = SalBase * 0.30;
        }
        if (CodCargo == 100)
        {
            Aumento = SalBase * 0.40;
        }

        Salfinal = Aumento + SalBase;
        

        printf("\n---------------------------------------------------------------\n");
        printf("O Aumento total foi de R$%.2f, dando um valor total de R$%.2f", Aumento, Salfinal);
        printf("\n---------------------------------------------------------------\n");
        printf("Deseja fazer um aumento de outro profissional? <S> <N>");
        pimba = getche();
        pimba = toupper(pimba);
    } while (pimba != 'N');
}
