#include <stdio.h>

int e_primo(int num){
    if (num <= 1) return 0;
    for(int i = 2; i * i<=num; i++){
        if(num % i == 0) return 0;
    }
    return 1;
}

int main(){
    int num;
    
    printf("digite um numero para verificar se e primo: \n");
    scanf("%d", &num);
    
    if (e_primo(num)){
        printf("%d eh primo", num);
    }
    else{
        printf("%d nao eh primo", num);
    }
    return 0;
    
}