#include <stdio.h>

int main(){

    int matriz[3][3], num, i, j, delta, maior;
    float media, soma = 0;

    for (i=0; i<3; i++)
        for (j=0; j<3; j++){

            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
            
            if (i==0 && j==0) maior = matriz[0][0];
            
            else if ( maior < matriz[i][j]) maior = matriz[i][j];
        }
    
    int soma_diagomal = 0;
    for (i=0; i<3; i++) soma_diagomal += matriz[i][i];
    
    if (maior > 0) delta = 1;
    else if (maior < 0) delta = -1;
    else delta = 0;

    media = soma/9;

    printf("%.2f %d %d %d", media, maior, delta, soma_diagomal);

    return 0;
}