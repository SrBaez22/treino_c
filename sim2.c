
#include <stdio.h>

int main() {
    int tam;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    if (tam <= 0) {
        printf("Tamanho invalido!\n");
        return 1;
    }

    int numero[tam];
    int i, j, contador, ja_contado;

    // Leitura dos elementos
    for (i = 0; i < tam; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
    }

    // Contagem dos numeros repetidos
    for (i = 0; i < tam; i++) {
        ja_contado = 0;

        // Verifica se o numero ja apareceu antes
        for (j = 0; j < i; j++) {
            if (numero[i] == numero[j]) {
                ja_contado = 1;
                break;
            }
        }

        // Processa somente a primeira ocorrencia
        if (ja_contado == 0) {
            contador = 0;

            for (j = 0; j < tam; j++) {
                if (numero[i] == numero[j]) {
                    contador++;
                }
            }
            //
            if (contador > 1) {
                printf("%d repetiu %d vezes\n",
                       numero[i], contador);
            }
        }
    }

    return 0;
}
