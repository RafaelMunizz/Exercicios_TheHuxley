#include <stdio.h>

int main(){

    double vetor[20], valor = 1.0, soma, media;
    int i = 0;

    while (scanf(" %lf", vetor[i]) > 0.0){
        
        soma += vetor[i];
        i++;
    }

    media = soma/i;

    printf("%.2lf\n%.2lf", soma, media);
    
    return 0;
}