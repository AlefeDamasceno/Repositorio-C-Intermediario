#include <stdio.h>

int main(){
    char array_frase[100];

    FILE *arquivo;
    arquivo = fopen("arquivo1.txt", "r");
    fgets(array_frase, 100, arquivo);
    
    printf("%s", array_frase);
    fclose(arquivo);
}