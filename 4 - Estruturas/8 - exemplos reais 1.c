#include <stdio.h>

struct carros{
    char marca[10];
    char modelo[20];
    int ano;
};

int main(){
    struct carros carro1 = {"BMW","X5", 1999};
    struct carros carro2 = {"Ford","Mustang", 1969};
    struct carros carro3 = {"Toyota","Corolla Cross", 2024};

    printf("%s %s %d\n", carro1.marca, carro1.modelo, carro1.ano);
    printf("%s %s %d\n", carro2.marca, carro2.modelo, carro2.ano);
    printf("%s %s %d\n", carro3.marca, carro3.modelo, carro3.ano);
}