#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){


int Numero_Jogador, Numero_Maquina, resultado;
char Tipo_Comparacao;
 
srand (time (0));
Numero_Maquina = rand () % 100 + 1;

printf("\tBEM VINDO AO MMI!!\n");

printf("\nVocê deve escolher um número e um tipo de comparação para comerçamos!\n");

printf("\nM. Maior\n");
printf("N. Menor\n");
printf("I. Igual\n");

scanf(" %c", &Tipo_Comparacao);


printf("\nDigite seu número (Entre 1 e 100)!\n");
scanf("%d", &Numero_Jogador);


switch (Tipo_Comparacao)
{
case 'M':
    
if (Numero_Jogador > Numero_Maquina) {

    printf("\nParábens!! Você Venceu!\n");
    printf("Seu Número: %d\n", Numero_Jogador);
    printf("Número da Máquina: %d\n", Numero_Maquina);

 } else if (Numero_Jogador < Numero_Maquina) {

    printf("\nInfelizmente você perdeu!!\n");
    printf("Seu Número: %d\n", Numero_Jogador);
    printf("Número da Máquina: %d\n", Numero_Maquina);
 } else{
    
    printf("\nEmpate!!\n");
    printf("Seu Número: %d\n", Numero_Jogador);
    printf("Número da Máquina: %d\n", Numero_Maquina);}
    break;


case 'N':

if (Numero_Jogador < Numero_Maquina) {

    printf("\nParábens!! Você Venceu!\n");
    printf("Seu Número: %d\n", Numero_Jogador);
    printf("Número da Máquina: %d\n", Numero_Maquina);

 } else if (Numero_Jogador > Numero_Maquina) {

    printf("\nInfelizmente você perdeu!!\n");
    printf("Seu Número: %d\n", Numero_Jogador);
    printf("Número da Máquina: %d\n", Numero_Maquina);
 } else{
    
    printf("\nEmpate!!\n");
    printf("Seu Número: %d\n", Numero_Jogador);
    printf("Número da Máquina: %d\n", Numero_Maquina);}
break;


case 'I':

if (Numero_Jogador == Numero_Maquina) {

    printf("\nParábens!! Você Venceu!\n");
    printf("Seu Número: %d\n", Numero_Jogador);
    printf("Número da Máquina: %d\n", Numero_Maquina);

 } else {

    printf("\nInfelizmente você perdeu!!\n");
    printf("Seu Número: %d\n", Numero_Jogador);
    printf("Número da Máquina: %d\n", Numero_Maquina);}
break;    

default:

printf("Valor invalido do Tipo de Comparação. Por favor, tente novamente!");
    break;
}


return 0;
}