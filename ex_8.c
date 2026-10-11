#include <stdio.h>

int contar_vogais(char *string){
    int contador = 0;
    while(*string!='\0'){
        if(*string=='a' || *string=='e' || *string=='i' || *string=='o' || *string=='u' || *string=='A' || *string=='E' || *string=='I' || *string=='O' || *string=='U'){
            contador++;
        }
        string++;
    }
    return contador;


}


int main()
{
    char palavra[100];
    
    printf("Digite a palavra que voce quer contar vogais: \n");
    scanf("%99s", &palavra);
    
    printf("A palavra tem: %d vogais.\n", contar_vogais(palavra));
    return 0;
}