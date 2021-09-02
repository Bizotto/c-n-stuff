
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