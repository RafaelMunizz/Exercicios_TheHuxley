#include <stdio.h>

int main(){

    float a;
    int cont = 0;

    for (int i=0; i<5; i++){

        printf("Digite um valor:");
        scanf("%f", &a);

        if (a < 0) cont++;
    }

    printf("Foram digitados %d numeros negativos", cont);
    return 0;
}