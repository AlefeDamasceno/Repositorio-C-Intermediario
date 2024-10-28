#include <stdio.h>

int soma(int x);
int main(){
    int result_soma = soma(10); //10+9+8+7+6+5+4+3+2+1
    printf("%d", result_soma);
    return 0;
}

int soma(int x){
    if (x>0){
        return x + soma(x-1); //retorna x (10) e chama função de 9. até x >= 1. 
    }else{
        return 0;
    }
}