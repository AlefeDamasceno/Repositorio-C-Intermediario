#include <stdio.h>
#include <string.h>

struct estrutura{
    int num;
    char letra;
    char string[30];
};

int main(){
    struct estrutura s1 = {14, 'G', "Alefe gomes"};

    printf("%d\n%c\n%s", s1.num, s1.letra, s1.string);

    s1.num = 22;
    s1.letra = 'A';
    strcpy(s1.string,"Ana luiza");

    printf("%d\n%c\n%s", s1.num, s1.letra, s1.string);
}