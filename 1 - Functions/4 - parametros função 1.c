#include <stdio.h>

void msg_boasvindas(char nome[30]){
    printf("Seja bem vindo, %s!\n", nome);
}

int main(){
    msg_boasvindas("Alefe");
    msg_boasvindas("Arthur");
    msg_boasvindas("Ana");
    msg_boasvindas("Maiara");
}