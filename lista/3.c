/*Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal.*/


#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero decimal: ");
    scanf("%d", &numero);

    printf("Decimal: %d\n", numero);
    printf("Hexadecimal: %x\n", numero);
    printf("Octal: %o\n", numero);

    return 0;
}