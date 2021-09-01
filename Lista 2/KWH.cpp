/* Deseja-se fazer uma pesquisa a respeito do consumo mensal de 
energia elétrica em uma determinada cidade. Para isso são 
fornecidos os seguintes dados :
a) preço do kWh consumido
b) numero do consumidor
c) quantidade de Kwh consumidos durante o mês
d) código do tipo de consumidor (residencial, comercial, 
industrial)
O número do consumidor igual a zero deve ser usado como condição 
de parada (flag).

Fazer um algoritmo que calcule e imprima :
• para cada consumidor o total a pagar
• o maior consumo verificado
• o menor consumo verificado
• o total do consumo para cada um dos três tipos de consumidores
• a média geral de consumo 

//variáveis 
 PrecoKWHConsumido fracionário;
 NumConsumidor inteiro; //(flag == 0)bandeira de finalização
 QtidadeKwhConsMes fracionário;
 CodTipoConsu inteiro; //(1-Residencial,2-Comercial,3-Industrial)
 TotalPagarConsu fracionário;
 MaiorConsumo fracionário;
 MenorCOnsumo fracionário;
 TotalConsumoRes fracionário;
 TotalConsumoCom fracionário;
 TotalConsumoInd fracionário;
 MediaGeralCons fracionário;
 QtidadeConsumidores inteiro;
 op caracter;
 
//entrada de dados

faça1 //geral - deseja continuar ou não do{
limpa tela;
MaiorConsumo = 0;
MenorConsumo = 9999999;
TotalConsumoRes = 0;
TotalConsumoCom = 0;
TotalConsumoInd = 0;
MediaGeralCons = 0;
QtidadeConsumidores = 0;
  escreva("Digite o preço do KWh:");
  leia(PrecoKWHConsumido);//0,53224

faça2 //flag número do consumidor = 000  do{
limpa tela;
  escreva("Digite a quantidade de Kwh consumidos durante o mês:");
  leia(QtidadeKwhConsMes);
escreva("Digite Código do tipo de consumidor");
  escreva("1-Residencial");
  escreva("2-Comercial");
  escreva("3-Industrial");
  leia(CodTipoConsu);

  escreva("Digite o numero do consumidor:")//001 ou 002 ou 003 ou 000
  leia(NumConsumidor);

//processamento dos dados

TotalPagarConsu = PrecoKWHConsumido * QtidadeKwhConsMes;
escreva("Total do consumo pelo Consumidor: ",TotalPagarConsu);
MediaGeralCons = MediaGeralCons + TotalPagarConsu ;

se(CodTipoConsu == 1) então
escreva("Consumidor Tipo Residencial");
TotalConsumoRes = TotalConsumoRes + TotalPagarConsu;
escreva("Total do consumo pelo Consumidor Residencial: ",TotalConsumoRes);
fimse

se(CodTipoConsu == 2) então
escreva("Consumidor Tipo Comercial");
TotalConsumoCom = TotalConsumoCom + TotalPagarConsu;
escreva("Total do consumo pelo Consumidor Comercial: ",TotalConsumoCom);
fimse

se(CodTipoConsu == 3) então
escreva("Consumidor Tipo Industrial");
TotalConsumoInd = TotalConsumoInd + TotalPagarConsu;
escreva("Total do consumo pelo Consumidor Residencial: ",TotalConsumoRes);
fimse

se(TotalPagarConsu > MaiorConsumo) então
    MaiorConsumo =  TotalPagarConsu;
fimse

se(TotalPagarConsu < MenorConsumo) então
    MenorConsumo =  TotalPagarConsu;
fimse

escreva("Digite o número do Consumidor:");
leia(NumConsumidor);

QtidadeConsumidores  = QtidadeConsumidores +1;


Enquanto2(NumConsumidor != 000);//flag número do consumidor = 000
//while()
MediaGeralCons=MediaGeralCons/QtidadeConsumidores; 
escreva("A Média Geral de Consumo:",MediaGeralCons);
escreva(" Menor Consumo:", MenorConsumo);
escreva(" Maior Consumo:", MaiorConsumo);

escreva("Deseja novo valor de Preço KWh <S> ou <N>");
leia(op);
op=maísculo(op);
Enquanto1(op != 'N');//geral - deseja continuar ou não
//while()
fimalgoritmo;*/

#include <conio.h>
#include <stdio.h>
#include <iostream>

char pimba;
float PrecoKWHConsumido, QtidadeKwhConsMes, TotalPagarConsu, MaiorConsumo, TotalConsumoRes, MenorConsumo;
float TotalConsumoCom, TotalConsumoInd, MediaGeralCons, QtidadeConsumidores;
int NumConsumidor, CodTipoConsu;

int main(void)
{
    do
    {
        system("cls");
        MaiorConsumo = 0;
        MenorConsumo = 9999999;
        TotalConsumoRes = 0;
        TotalConsumoCom = 0;
        TotalConsumoInd = 0;
        MediaGeralCons = 0;
        QtidadeConsumidores = 0;

        printf("\nDigite o preco do kwh:\n");
        scanf("\n%f", &PrecoKWHConsumido);
        do
        {
            system("cls");
            printf("\nDigite a quantidade de Kwh consumidos durante o mes:\n");
            scanf("%f", &QtidadeKwhConsMes);
            printf("\ndigite o codigo de comsumidor:");
            printf("\n1-Residencial");
            printf("\n2-Comercial");
            printf("\n3-Industrial");

            printf("\nDigite o numeoro do consumidor:");
            scanf("%f", &NumConsumidor);

            TotalPagarConsu = PrecoKWHConsumido * QtidadeKwhConsMes;

            printf("\nTotal do consumo pelo Consumidor: ", TotalPagarConsu);

            MediaGeralCons = MediaGeralCons + TotalPagarConsu;
            if (CodTipoConsu == 1)
                ;
            {
                printf("\nConsumidor Tipo Residencial");
                TotalConsumoRes = TotalConsumoRes + TotalPagarConsu;
                printf("\nTotal do consumo pelo Consumidor Residencial: ", TotalConsumoRes);
            }
            if (CodTipoConsu == 2)
            {
                printf("\nConsumidor Tipo Comercial");
                TotalConsumoCom = TotalConsumoCom + TotalPagarConsu;
                printf("\nTotal do consumo pelo Consumidor Comercial: ", TotalConsumoCom);
            }
            if (CodTipoConsu == 3)
            {
                printf("\nConsumidor Tipo Industrial");
                TotalConsumoInd = TotalConsumoInd + TotalPagarConsu;
                printf("\nTotal do consumo pelo Consumidor Residencial: ", TotalConsumoRes);
            }
            if (TotalPagarConsu > MaiorConsumo)
            {
                MaiorConsumo = TotalPagarConsu;
            }
            if (TotalPagarConsu < MenorConsumo)
            {
                MenorConsumo = TotalPagarConsu;
            }
            printf("\nDigite o numero do Consumidor:");

            scanf("%f", &NumConsumidor);

            QtidadeConsumidores = QtidadeConsumidores + 1;

        } while (NumConsumidor != 000);
        MediaGeralCons = MediaGeralCons / QtidadeConsumidores;
        printf("\nA Media Geral de Consumo:%.2f", MediaGeralCons);
        printf("\nMenor Consumo:%.2f", MenorConsumo);
        printf("\nMaior Consumo:%.2f", MaiorConsumo);

        printf("\ndeseja informar um novo valor KWH? <S> <N>\n");
        pimba = getche();
        pimba = toupper(pimba);

    } while (pimba != 'N');
    system("cls");
}