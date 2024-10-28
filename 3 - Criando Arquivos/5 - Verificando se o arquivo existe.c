#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("arquivo1.txt", "r");
    if(arquivo != NULL){
        printf("Arquivo Encontrado!");
    }else{
        printf("Arquivo nao encontrado!");
    }
}