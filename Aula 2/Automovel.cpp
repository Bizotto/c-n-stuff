// Bibliotecas

#include <conio.h>	//input... output... comand
#include <stdio.h>	//Screen comands all of those shit in screen
#include <iostream> //Variable comands input output

// Variaveis
char Nomeauto[30];
float PrecoAuto;
float PrecoFab;

main()
{

	printf("\n Digite o nome do Automovel: ");
	scanf("%s", &Nomeauto);

	printf("\n Digite o preco de fabrica do Automovel: ");
	scanf("%f", &PrecoFab);

	PrecoAuto = (PrecoFab + (PrecoFab * 0, 45) + (PrecoFab * 0.28));

	printf("\n O Automovel: %s", Nomeauto);

	printf("\n O Preco final do Automovel: %5.2f", PrecoAuto);

	printf("\n\n");

	system("pause");
}
