/*
1. Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.
*/


#include <stdio.h>


int main(){

int metro;
float decimetro, centimetro, milimetro;

printf("digite um valor em metro: ");
scanf("%d", &metro);

decimetro = metro * 10;
centimetro = metro * 100;
milimetro = metro * 1000;

printf("valor em decimetro: %2.f \n", decimetro);
printf("valor em centimetro: %2.f \n", centimetro);
printf("valor em milimetro: %2.f \n", milimetro);

}