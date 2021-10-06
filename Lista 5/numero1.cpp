#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <time.h>

// opcao 1 e codigo
int matriz[10][20];
int op;

// opcao 2
int maior[10];

// opcao 3
float media[10];
float somaop3;

//opcao 4
float somaop4, maiorop4;

int main(void)
{

    system("cls");
    srand(time(0));
    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 20; y++)
        {
            matriz[x][y] = rand() % 200 + -100;
        }
    }
menu:
    printf("\n Menus de opcoes.");
    printf("\n Opcao 1 = Aparecer todos os valores da matriz.");
    printf("\n Opcao 2 = Aparecer o maior elemento de cada linha.");
    printf("\n Opcao 3 = Media dos elementos de cada coluna.");
    printf("\n Opcao 4 = Soma dos produtos diferentes de zero.");
    printf("\n Opcao 5 = Numeros Negativos e quantos sao. ");
    printf("\n Opcao 6 = Sair do sistema.\n");
    scanf("%i", &op);

    if (op == 1)
    {
        for (int x = 0; x < 10; x++)
        {
            for (int y = 0; y < 20; y++)
            {
                printf("\n Matriz[%i][%i]= %i", x, y, matriz[x][y]);
            }
        }

        printf("\n Tecle para voltar ao menu .. ...");
        getche();
        goto menu;
    }

    if (op == 2)
    {
        for (int y = 0; y < 20; y++)
        {
            for (int x = 0; x < 10; x++)
            {
                if (matriz[x][y] > maior[y])
                {
                    maior[y] = matriz[x][y];
                }
            }
            printf("\n O maior valor X de cada linha Matriz= %i ", maior[y]);
        }
        printf("\n Tecle para voltar ao menu .. ...");
        getche();
        goto menu;
    }
    if (op == 3)
    {
        for (int x = 0; x < 10; x++)
        {
            for (int y = 0; y < 20; y++)
            {
                somaop3 = somaop3 + matriz[x][y];
            }
            media[x] = somaop3 / 10;
            printf("\n\n");
            printf("\n Coluna= %i ", x);
            printf("\n Soma = %.2f ", somaop3);
            printf("\n Media = %.2f ", media[x]);
        }
    }
    printf("\n Tecle para voltar ao menu .. ...");
    getche();
    goto menu;

    if (op == 4)
    {
        for (int x = 0; x < 10; x++)
        {
            for (int y = 0; y < 20; y++)
            {
                if (somaop4 != 0)
                {
                    
                    somaop4 = somaop4 + matriz[x][y];
                    printf("%.2f", somaop4);
                }
                
            }
        }
    }
}