#include <stdio.h>



int tamanho_string(char *string){
    int contador = 0;
    while(*string!='\0'){
        contador ++;
        string++;
    }
    return contador;
}

int main()
{
    char palavra[100];
    
    printf("Digite a palavra que voce quer contar caracteres: \n");
    scanf("%99s", &palavra);
    
    printf("A palavra tem: %d letras.\n", tamanho_string(palavra));
    return 0;
}