/*1. Escreva um algoritmo que leia o nome de duas cidades, em seguida a
distância em KM. Supondo que você irá viajar de uma para outra e o seu carro
possui um tanque de combustível de 45 litros de gasolina, e este faz uma
média de 10km/litro. Apresente quantos litros você irá gastar e quantos
tanques. Peça para inserir o preço da gasolina e calcule o custo da viagem. 
*/

/*45km tanq cheio
10km/l
gasto 8,44 litros


*/
//Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <math.h>

//variaveis

char CidadeA[30];       //Florianopolis?
char CidadeB[30];       //Balneario camboriu? 1 h 14 min (84,4 km)
float LitrosTanq;       //450
float ConsumoKM;        //10km/l
float FuelValue;        //5,84
float DAB;              //84,4
float LitrosGastos;     // definir de acordo com carro
float ValorGasto;       //definir
float TanqueCheio = 45; //45l
float result;

main()
{
    printf("\n Digite o Nome da Cidade A: ");
    scanf("%s", &CidadeA);

    printf("\n Digite o Nome da Cidade B: ");
    scanf("%s", &CidadeB);

    printf("\n Digite o valor da gasolina: ");
    scanf("%f", &FuelValue);

    printf("\n Digite a distancia entre A e B: ");
    scanf("%f", &DAB);

    printf("\n Digite o gasto em KM/L do seu carro: ");
    scanf("%f", &ConsumoKM);

    printf("\n Quantos litros comporta: ");
    scanf("%f", &LitrosTanq);

    LitrosGastos = (LitrosTanq - DAB) / ConsumoKM;

    printf("\n\n Foram gastos em litros: %f", LitrosGastos);

    result = TanqueCheio - LitrosGastos;
    printf("\n\n Diferenca dos gastos: %f", result);

    ValorGasto = result * FuelValue;
    printf("\n\n O Valor todal gasto em reais, foi de: %f", ValorGasto);

    printf("\n\n");

    system("pause");
}