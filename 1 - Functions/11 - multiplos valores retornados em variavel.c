#include <stdio.h>

int soma(int x, int y){
    return x+y;
}

int main(){
    int resultado = soma(4,3);
    int resultado1 = soma(3,3);
    int resultado2 = soma(1450, 1303);
    printf("Soma: %d\n", resultado);
    printf("Soma: %d\n", resultado1);
    printf("Soma: %d\n", resultado2);
}