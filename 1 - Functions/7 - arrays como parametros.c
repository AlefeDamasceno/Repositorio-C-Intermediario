#include <stdio.h>

void funcao_array(int numeros[20]){
    int i;
    for(i=0; i<5; i++){
        printf("%d\n", numeros[i]);
    }
}

int main(){
    int numeros[20] = {10,20,30,40,50};
    funcao_array(numeros);
}