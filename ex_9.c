#include <stdio.h>

void maiusculas(char *string){
    while(*string!='\0'){
        if(*string>='a' && *string<='z'){
            *string = *string - 32;
        }
        string++;
    }
}

int main()
{
    char palavra[100];
    
    printf("Digite a palavra que voce quer transformar em maiusculas: \n");
    scanf("%99s", &palavra);
    
    maiusculas(palavra);
    
    printf("A palavra em maiusculas e: %s\n", palavra);
    return 0;
}