#include <stdio.h>

void inverter(char *string){
    char *inicio = string;
    char *fim = string;

    while(*fim != '\0'){
        fim++;
    }

    if(fim != inicio){
        fim--;
    }

    while(inicio < fim){
        char temporario = *inicio;
        *inicio = *fim;
        *fim = temporario;
        inicio++;
        fim--;
    }
}

int main(void){
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%99s", palavra);

    inverter(palavra);
    printf("%s\n", palavra);

    return 0;
}