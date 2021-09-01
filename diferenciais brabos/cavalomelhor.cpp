/*2. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
cavalos comprados para um haras.*/

//cavalos
//cada cavalo tem 4 patas logo x4

#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

//variaveis

float cavalos;
int ferraduras;

int main(void)
{

    cout << "Quantidade de cavalos no estabulo :  ";
    cin >> cavalos;

    ferraduras = cavalos * 4;

    cout << "A quantidade de ferraduras :" << ferraduras;

    cout << "\n\n";

    system("pause");
}