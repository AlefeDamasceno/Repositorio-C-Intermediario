#include <stdio.h>

enum nivel{
    BAIXO = 20,
    MEDIO = 50, //VIRGULA
    ALTO = 75
};

int main(){
    enum nivel var1 = MEDIO;
    printf("%d", var1);
} //50