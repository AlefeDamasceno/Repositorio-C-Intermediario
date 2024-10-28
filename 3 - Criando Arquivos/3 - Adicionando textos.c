#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo=fopen("arquivo2.txt", "w");
    fprintf(arquivo, "Primeiro texto!\n");
    
    arquivo = fopen("arquivo2.txt", "a");
    fprintf(arquivo,"Adicionei mais um texto");
}