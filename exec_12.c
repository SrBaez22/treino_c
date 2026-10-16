#include <stdio.h>

int contar_palavras(char *texto){
    int total = 0;
    int em_palavra = 0;

    while (*texto != '\0') {
        if (*texto == ' ' || *texto == '\n' || *texto == '\t') {
            em_palavra = 0;
        } else if (!em_palavra) {
            em_palavra = 1;
            total++;
        }

        texto++;
    }

    return total;
}

int main() {
    char frase[200];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Quantidade de palavras: %d\n", contar_palavras(frase));

    return 0;
}