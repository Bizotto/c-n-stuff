/* Construa um algoritmo para ler o nome de um paciente, sua idade, seu peso e sua altura.
Na sequencia, mostrar na tela o nome, o peso, a altura e a idade, dizendo se este e conforme
a idade: idade <= 12 crianca. de 12 a 18 (idade > 12 e idade <= 18) adolescente. idade > 18 adulto 

algoritmo 

Escreva ("digite o nome do paciente");
leia ("Nome_do_paciente");

Escreva ("Digite a idade do paciente")
    Leia ("Idade")

Escreva ("Digite o peso do paciente");
    Leia ("Peso");

Escreva ("Digite a altura do paciente");
    Leia("altura");

Se ("Idade <= 12") entao
    Escreva ("Este individuo e uma crianca");

Se ("Idade > 12") Entao 
    Escreva ("Este individuo e um Adolescente");

se ("Idade <= 18") Entao 
    Escreva ("Este individuo e um Adolescente");

se ("Idade > 18") Entao 
    Escreva ("Este individuo e um Adulto");
        
        
        FIM DO ALGORITMO.
*/

#include<conio.h>
#include<stdio.h>
#include<iostream>


char Nome_paciente[30];
    int Idade;
    float Peso, Altura;

 void main(){
    setlocale(LC_ALL,"portuguese");

    printf ("/n Digite o nome do paciente");
        scanf  ("%s",& Nome_paciente);

    printf ("/n digite sua idade");
        scanf ("%s",& Idade);

    printf ("/n Informe seu peso");
        scanf  ("%s",& Peso);

    printf("/n informe sua altura");
        scanf("%s",& Altura);


}
