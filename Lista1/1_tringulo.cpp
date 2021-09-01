/* /1 - Algoritmo do Triangulo
Faça um algoritmo para ler a base e a altura de um triângulo. Em seguida, escreva a área do
mesmo. Área = (Base * Altura) / 2 */

//Bibliotecas
#include <conio.h>
#include <stdio.h>
#include <iostream>

//Variaveis

float Area;
float Base;
float Altura;

int main(void)
{

    printf("\n Insira o valor da Base do triangulo:  ");
    scanf("%f", &Base);

    printf("\n Insira o valor da Altura do triangulo: ");
    scanf("%f", &Altura);

    Area = (Base * Altura) / 2;

    printf("\n\n The area of tringle A is: %f ", Area);

    printf("\n\n");

    system("pause");
}