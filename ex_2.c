#include <stdio.h>



void dobrar(int *numero){
*numero = *numero * 2;
    
}

int main(void){

int valor = 15;

dobrar(&valor);

printf("%d", valor);

return 0;
}