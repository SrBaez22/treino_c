#include <math.h>
#include <stdio.h>



void dois_numeros(int numero_1, int numero_2, int *soma, int *produto, int *quadrado_1, double *raiz){
    *soma = numero_1 + numero_2;
    *produto = numero_2 * pow(numero_2,2);
    *quadrado_1 = numero_1 * numero_1;
    *raiz = sqrt((double)numero_1 * numero_1 + (double)numero_2 * numero_2);
}

int main(){
    int numero_1 =2;
    int numero_2 = 2;
    int soma, produto, quadrado_1;
    double raiz;



dois_numeros(numero_1, numero_2, &soma, &produto, &quadrado_1, &raiz);
    printf("%d %d %d %.2f", soma, produto, quadrado_1, raiz);

    return 0;

}