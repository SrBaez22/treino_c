#include <stdio.h>


int main(){

int numeros[10];
int contador_positivo = 0;
int contador_negativo = 0;
int zeros = 0;

for(int i = 0; i<10; i++){
    printf("digite um numero: \n");
    scanf("%d", &numeros[i]);
}
for(int i = 0; i<10; i++){
    printf("numero[%d] = %d\n",i,numeros[i]);

    if(numeros[i]>0){
        contador_positivo++;
    }
    else if(numeros[i]<0){
        contador_negativo++;
    }
    else {
        zeros++;
    }
}
printf("positivos: %d\n",contador_positivo);
printf("negativos: %d\n",contador_negativo);
printf("zeros: %d\n",zeros);
}