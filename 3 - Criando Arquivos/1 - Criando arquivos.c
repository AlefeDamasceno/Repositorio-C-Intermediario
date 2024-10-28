#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("arquivo1.txt", "w");
    if (arquivo != NULL){
        printf("Arquivo foi criado!");
    }else{
        printf("Arquivo não encontrado!");
    }
    fclose(arquivo);

//Verifica se o arquivo foi criado
}