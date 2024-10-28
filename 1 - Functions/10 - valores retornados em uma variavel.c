#include <stdio.h>

int soma(int x, int y){
    return x+y;
}

int main(){
    int resultado = soma(4,3);
    printf("Soma: %d", resultado);
}