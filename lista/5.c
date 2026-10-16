#include <stdio.h>

int main(){
double temperatura_c, temperatura_f;
char letra;

printf("diga se quer transformar a temperatura para Celcius(c) ou para Faremheit (f) ");
scanf("%c", &letra);

if(letra == 'f' || letra == 'F'){

    printf("agora escolha o numero que quer transformar para faremheit: ");
    scanf("%lf", &temperatura_c);

    temperatura_f = (temperatura_c * 1.8) + 32;

    printf("%lf C em faremheit e: %2.lf\n",temperatura_c, temperatura_f);

}

else if(letra == 'c' || letra == 'C'){
    printf("agora escolha o numero que quer transformar para celcius: ");
    scanf("%lf", &temperatura_f);

    temperatura_c = ((temperatura_f - 32) / 9) * 5;

    printf("%lf F em faremheit e: %2.lf\n",temperatura_f, temperatura_c);


}



}