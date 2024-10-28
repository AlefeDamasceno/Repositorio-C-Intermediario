#include <stdio.h>

void soma(int x, int y){
    int soma = x + y;
    printf("%d + %d = %d\n",x,y,soma);
}

int main(){
    soma(3,5);
    soma(15,10);
    soma(4,4);
}