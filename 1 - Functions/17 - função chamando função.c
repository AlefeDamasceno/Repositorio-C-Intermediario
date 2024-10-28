#include <stdio.h>

void mensagem1();
void mensagem();

int main(){
    mensagem();
}

void mensagem(){
    printf("Mensagem da funcao 1\n");
    mensagem1();
}
void mensagem1(){
    printf("mensagem da funcao 2");
}