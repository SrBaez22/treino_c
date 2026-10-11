#include <stdio.h>

int somar(int *vetor, int tamanho){
    int soma = 0;
    for(int i = 0; i<tamanho; i++){
        soma += *(vetor+i);
    }
    return soma;
}


int main()
{
    int vetor[6] = {10,20,30,40,50,10};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    printf("o valor da soma é: %d",somar(vetor, tamanho));

    return 0;
}