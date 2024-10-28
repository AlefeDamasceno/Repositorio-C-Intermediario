#include <stdio.h>

int soma(int x, int y){
    return x+y;
}

int main(){
    int array_num[5], i;
    array_num[0] = soma(3,3);
    array_num[1] = soma(19,19);
    array_num[2] = soma(25,25);
    array_num[3] = soma(1,1);
    array_num[4] = soma(3,4);

    for(i=0;i<5; i++){
        printf("resultado%d: %d",i+1, array_num[i]);
    }
}