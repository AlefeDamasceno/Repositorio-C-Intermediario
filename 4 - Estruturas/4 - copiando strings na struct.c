#include <stdio.h>
#include <string.h>

struct estrutura{
    char string[30];
};

int main(){
    struct estrutura s1;
    struct estrutura s2;

    strcpy(s1.string, "Texto s1 inserido");
    printf("%s\n", s1.string);

    strcpy(s2.string, "Texto s2 inserido");
    printf("%s\n", s2.string);
}