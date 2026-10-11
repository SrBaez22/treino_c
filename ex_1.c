#include <stdio.h>

int main()
{
int numero = 10;
int *point;

point = &numero;
printf("%d\n", numero);
printf("%p\n", point);
printf("%d\n", *point);
*point = 50;
printf("%d\n", numero);
}

