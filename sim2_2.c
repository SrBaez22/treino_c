#include <stdio.h>

int main(){

//defino o tamanho do vetor
int tam;

printf("digite o tamanho do vetor: ");
scanf("%d", &tam);
printf("\n");

if(tam<=0){
    printf("valor invalido\n");
    return 1;
}




int i, j, vetor[tam], contador, ja_contado;


//adiciono os elementos do vetor
for(i=0; i<tam;i++){
    printf("preencha o vetor: ");
    scanf("%d", &vetor[i]);
}



// percorro o vetor
for(i=0; i<tam; i++){
    ja_contado = 0;


    //percorro o vetor novamente para ver se tem repetidos
    for(j=0;j<i;j++){
        if(vetor[i]==vetor[j]){
            ja_contado = 1;
            break;

        }
    }
    //se nao repetir, o contador continua zerado
    if(ja_contado == 0){
        contador = 0;
        

        
        for(j=0;j<tam;j++){
            if(vetor[i]==vetor[j]){
                contador++;
            }

        }
        if(contador>1){
            printf("%d repetiu %d vezes\n",
                       vetor[i], contador);
        }
    }
}

}