#include <stdio.h>

struct estrutura{
    int num;
    char letra;
    char string[30];
};

int main(){
    struct estrutura s1 = {14, 'G', "Alefe gomes"};

    printf("%d\n%c\n%s", s1.num, s1.letra, s1.string);

    struct estrutura s2;
    s2 = s1;

    printf("%d\n%c\n%s", s2.num, s2.letra, s2.string);
}