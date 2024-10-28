#include <stdio.h>
int x = 7;

int funcao(){
    int x = 6;
    // Aqui x vale 6
}
int funcao2(){
    printf("%d", x);
    //Aqui x vale 7
}
int main(){
    int x = 4;
    //Aqui x vale 4
}