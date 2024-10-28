#include <stdio.h>

struct estrutura{
    int num;
    char letra;
};

int main(){
    struct estrutura s1;
    s1.num = 10;
    s1.letra = 'G';

    printf("s1: %d\n", s1.num);
    printf("s1: %c\n", s1.letra);

    struct estrutura s2;
    s2.num = 18;
    s2.letra = 'R';
    
    printf("s2: %d\n", s2.num);
    printf("s2: %c", s2.letra);
}