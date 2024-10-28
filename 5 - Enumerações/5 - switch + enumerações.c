#include <stdio.h>

enum nivel{
    BAIXO = 1,
    MEDIO,
    ALTO
};

int main(){
    enum nivel var1 = BAIXO;
    switch(var1){
        case 1:
            printf("Nivel baixo\n");
            break;
        case 2:
            printf("Nivel medio\n");
            break;
        case 3:
            printf("Nivel alto\n");
            break;
    }
}