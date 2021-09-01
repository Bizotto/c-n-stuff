#include <conio.h>
#include <stdio.h>
#include <iostream>

float VetorNotas[3], Menor;
char op;

main()
{
    do
    {
        system("cls");
        setlocale(LC_ALL, "portuguese");

        for (int i = 0; i < 3; i++)
        {
            printf("Digite o numero %d \n", i + 1);
            scanf("%f", &VetorNotas[i]);
        }

        Menor = VetorNotas[0];

        if (Menor > VetorNotas[1])
        {
            Menor = VetorNotas[1];
        }

        if (Menor > VetorNotas[2])
        {
            Menor = VetorNotas[2];
        }

        printf("O menor numero dos 3 digitados foi: \n%.1f", Menor);

        printf("\n\nDeseja fazer um novo calculo? Digite <S> ou <N>.");
        op = getche();
        op = toupper(op);

    } while (op != 'N');
}