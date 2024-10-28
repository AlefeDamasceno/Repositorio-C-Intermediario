#include <stdio.h>

int somar(int x, int y); //Declaração

int main(){
    int resultado = somar(5,6); //Chamando a função
    printf("Soma: %d", resultado);
}

int somar(int x, int y){
    return x+y; //Definindo a função
}