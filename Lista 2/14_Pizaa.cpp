// 14. Calcule a área de uma pizza que possui um raio R (pi=3.14).
/*

pi * r.r


*/ 

// bibliotecas 
#include<conio.h>
#include<stdio.h>
#include<iostream>

// varivaeis
float diametro;
float Pizza;
char pimba;
float raio;

int main(void){
    do
    {
        system("cls");
        printf("------------------------------------------------");
        printf("\nDigite o diametro da pizza:\n");
        printf("------------------------------------------------\n");
        scanf("%f", &diametro);

        raio = diametro / 2;
        Pizza = 3.14 * (raio * raio);
        
        printf("\nA Area da determinada pizza e de %.2f centimetros\n", Pizza);



        printf("------------------------------------------------");
        printf("\nDeseja calcular novamente? <S> ou <N>\n");
        printf("------------------------------------------------\n");
        pimba=getche();
        pimba=toupper(pimba);
    } while (pimba != 'N');
    system("cls");
}