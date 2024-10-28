#include <stdio.h>

void mensagem(char nome[30], int idade){
    printf("Ola %s, voce tem %d anos!", nome, idade);
}

int main(){
    mensagem("alefe", 18);
}