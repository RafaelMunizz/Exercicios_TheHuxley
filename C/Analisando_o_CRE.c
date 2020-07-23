#include <stdio.h>

int main(){

    int vetor1[20], i = 0, j, indice=0;
    float vetor2[20], soma = 0.0, media = 0.0;

    while (1){

        scanf("%d", &vetor1[i]);
        if (vetor1[i] == 999) break;

        scanf("%f", &vetor2[i]);
        i++;
    }
    
    float menor = vetor2[0];

    for (j=0; j < i; j++){

        soma += vetor2[j];
        if (menor > vetor2[j]) {
            
            menor = vetor2[j];
            indice = j;
        }
    }

    media = soma/i;
    int matricula = vetor1[indice];

    printf("%d\n%.2f", matricula, media);

    return 0;
}
