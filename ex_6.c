#include <stdio.h>


int maior_elemento(int *vetor, int tamanho){
    int maior = *vetor;
    for(int i=0; i<tamanho; i++){
        if(*(vetor+i)>maior){
            maior = *(vetor+i);
        }
    }
    return maior;
}

int main()
{
    int vetor[5]={5,20,3,4,48};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    
    printf("o maior elemento e: %d", maior_elemento(vetor, tamanho));

    return 0;
}
