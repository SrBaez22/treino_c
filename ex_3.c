void maior_menor(int a, int b, int *maior, int *menor){
    if(a>b){
        *maior = a;
        *menor = b;
    }
    else if(a<b){
        *maior = b;
        *menor = a;
    }
    
}


int main(void){
    int numero_1;
    int numero_2;
    int resultado_maior, resultado_menor;
printf("digite dois numeros: \n");
scanf("%d %d", &numero_1, &numero_2);

maior_menor(numero_1, numero_2, &resultado_maior, &resultado_menor);
printf("maior: %d\n",resultado_maior);
printf("menor: %d\n",resultado_menor);
}