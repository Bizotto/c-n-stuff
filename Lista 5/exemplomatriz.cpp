
#include <conio.h>

#include <stdio.h>

#include <iostream>

#include <stdlib.h>

#include <locale.h>

#include <math.h>

int MA[3][3];
int MB[3][3];
int MS[3][3];
int MM[3][3];
int op;
int Valor;

main()
{
  do
  {
    system("cls");

    printf(" \n ...::: Entrada de Dados nas Matrizes :::... ");

    printf("\n \n");

    printf(" \n - Entrada de Dados MA[3][3] -");

    printf("\n \n");

    for (int x = 0; x < 3; x++)
    {
      for (int y = 0; y < 3; y++)
      {
        printf(" \n Entre com o valor da MA[%i][%i]: ", x, y);
        scanf("%i", &MA[x][y]);
      }
    }

    printf(" \n Entrada de Dados MB[3][3] ");
    for (int x = 0; x < 3; x++)
    {
      for (int y = 0; y < 3; y++)
      {
        printf(" \n Entre com o valor da MB[%i][%i]: ", x, y);
        scanf("%i", &MB[x][y]);
      }
    }

  Menu:
    system("cls");
    printf("\n Menu de Opþ§es de operaþ§es com Matrizes \n");
    printf("\n 1) Gerar um matriz resultante da soma das duas matrizes elemento a elemento, mostrando as trÛs");
    printf("\n 2) Gerar um matriz resultante da multiplicaþÒo das duas matrizes elemento a elemento invertido,mostrando as trÛs");
    printf("\n 3) Pedir ao usußrio um valor e localizar nas duas matrizes iniciais se este existe e sua localizaþÒo");
    printf("\n 4) Sair do sistema");
    printf("\n DIGITE A OPCAO: ");
    scanf("%i", &op);
    fflush(stdin);

    // OPCAO 1
    if (op == 1)
    {
      printf(" \n 1 SOMA DAS MATRIZES");

      printf("\n \n");

      printf(" \n ...::: MA[3][3] :::... ");

      printf("\n \n");

      for (int x = 0; x < 3; x++)
      {
        for (int y = 0; y < 3; y++)
        {
          printf(" \n MA[%i][%i] = %i ", x, y, MA[x][y]);
        }
      }

      printf("\n \n");

      printf(" \n ...::: MB[3][3] :::...");

      printf("\n \n");

      for (int x = 0; x < 3; x++)
      {
        for (int y = 0; y < 3; y++)
        {
          printf(" \n MB[%i][%i] = %i ", x, y, MB[x][y]);
        }
      }

      printf("\n \n");

      printf(" \n ...::: MS[3][3] :::...");

      printf("\n \n");

      for (int x = 0; x < 3; x++)
      {
        for (int y = 0; y < 3; y++)
        {
          MS[x][y] = MA[x][y] + MB[x][y];

          printf(" \n MS[%i][%i] = %i ", x, y, MS[x][y]);
        }
      }

      printf("\n\n  tecle enter para voltar ao Menu");
      getch();
      goto Menu;
    } //FIM OPCAO 1

    // OPCAO 2
    if (op == 2)
    {
      printf(" \n 2 MULTIPLICACAO DAS MATRIZES");

      printf("\n \n");

      printf(" \n ...::: MA[3][3] :::... ");

      printf("\n \n");

      for (int x = 0; x < 3; x++)
      {
        for (int y = 0; y < 3; y++)
        {
          printf(" \n MA[%i][%i] = %i ", x, y, MA[x][y]);
        }
      }

      printf("\n \n");

      printf(" \n ...::: MB[3][3] :::...");

      printf("\n \n");

      for (int x = 0; x < 3; x++)
      {
        for (int y = 0; y < 3; y++)
        {
          printf(" \n MB[%i][%i] = %i ", x, y, MB[x][y]);
        }
      }

      printf("\n \n");

      printf(" \n ...::: MM[3][3] :::...");

      printf("\n \n");

      for (int x = 0; x < 3; x++)
      {
        for (int y = 0; y < 3; y++)
        {
          MM[x][y] = MA[x][y] * MB[2 - x][2 - y];

          printf(" \n MM[%i][%i] = %i ", x, y, MM[x][y]);
        }
      }

      printf("\n\n  tecle enter para voltar ao Menu");
      getch();
      goto Menu;
    } //FIM OPCAO 2

    // OPCAO 3
    if (op == 3)
    {
      printf(" \n 3 LOCALIZACAO DE UM VALOR NAS MATRIZES");

      printf("\n \n");

      printf(" \n ...::: MA[3][3] :::... ");

      printf("\n \n");

      for (int x = 0; x < 3; x++)
      {
        for (int y = 0; y < 3; y++)
        {
          printf(" \n MA[%i][%i] = %i ", x, y, MA[x][y]);
        }
      }

      printf("\n \n");

      printf(" \n ...::: MB[3][3] :::...");

      printf("\n \n");

      for (int x = 0; x < 3; x++)
      {
        for (int y = 0; y < 3; y++)
        {
          printf(" \n MB[%i][%i] = %i ", x, y, MB[x][y]);
        }
      }

      printf("\n \n");

      printf("\n Digite o valor inteiro a ser localizado nas matrizes MA[3][3] e MB[3][3]");
      scanf("%i", &Valor);

      printf("\n \n");

      printf("\n Localizando o valor nas matrizes.......");

      int AchouMA = 0;
      int AchouMB = 0;

      for (int x = 0; x < 3; x++)
      {
        for (int y = 0; y < 3; y++)
        {
          if (Valor == MA[x][y])
          {
            printf(" \n Valor %i localizado na MA[%i][%i] = %i ", Valor, x, y, MA[x][y]);
            AchouMA++;
          }

          if (Valor == MB[x][y])
          {
            printf(" \n Valor %i localizado na MB[%i][%i] = %i ", Valor, x, y, MB[x][y]);
            AchouMB++;
          }
        }
      }

      printf("\n\n  tecle enter para voltar ao Menu");
      getch();
      goto Menu;
    } //FIM OPCAO 3

    if (op == 4)
    {
      exit(0);
    } //fim opcao

    printf("\n \n");
    printf(" \n Deseja calcular novos valores? Tecle <S> para sim ou <N> para nÒo. ");
    fflush(stdin);
    scanf("%c", &op);
    op = toupper(op);
  } while (op != 'N');
}
