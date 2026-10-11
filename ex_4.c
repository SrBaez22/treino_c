#include <stdio.h>


void calcular(int a, int b, int *soma, int *sub, int *mult){
    *soma = a + b;
    *sub = a-b;
    *mult = a*b;
}



int main(void)
{
    int a, b;
    int soma, sub, mult;
    printf("digite dois numeros: ");
    scanf("%d %d", &a, &b);
    
    calcular(a,b, &soma, &sub, &mult);
    printf("\nsoma: %d\n",soma);
    printf("subtracao: %d\n",sub);
    printf("multiplicacao: %d\n",mult);

    return 0;
}

