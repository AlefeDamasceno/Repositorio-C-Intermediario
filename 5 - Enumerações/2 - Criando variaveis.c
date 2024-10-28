#include <stdio.h>

enum nivel{
    BAIXO, //0
    MEDIO, //1
    ALTO //2
};

int main(){
    enum nivel var1 = MEDIO;
    printf("%d", var1);
    /* 0 = baixo
    1 = medio
    2 = alto */
}