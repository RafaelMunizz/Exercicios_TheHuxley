#include <stdio.h>

int main(){

    float audiencia[5], soma = 0, media, maior = 0;
    int i, indice; 
    char programa[8];

    for (i=0; i<5; i++) {
        scanf("%f", &audiencia[i]);
        soma += audiencia[i];

        if (maior < audiencia[i]){
            maior = audiencia[i];
            indice = i;

        }
    }

    media = soma/5;
    printf("%.2f\n", media);

    if (indice == 0 || indice == 3) printf("NOVELA");
    else if (indice == 2) printf("FUTEBOL");
    else if (indice == 1 || indice == 4) printf("FILME");

    return 0;
}
