#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo =fopen("arquivo2.txt", "w");
    fprintf(arquivo, "Inseri um texto!");
    fclose(arquivo);
}   