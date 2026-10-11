#include <stdio.h>


int reperc(int n){
    if(n<=1){
        return 1;
    }
    return n * reperc(n-1);
}


int main(){
    int num = 3;
    printf("fatorial de %d é: %d\n",num, reperc(num));
}