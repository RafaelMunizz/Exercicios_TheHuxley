#include <stdio.h>

void main(){

    int i, j, linhas, colunas;

    scanf("%d %d", &linhas, &colunas);

    int matriz[linhas][colunas];

    for (i=0; i < linhas; i++){
        for (j=0; j < colunas; j++){

            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < colunas; i++){

        if (i%2 == 0){
            for (j = 0; j < linhas; j++){
                if(matriz[j][i] == 0) printf("Queria que todo mundo fosse assim\n");
                else printf("Desliga o farol cidadao ( ._.)\n");
            }
        } else {
            for (j = linhas - 1; j >= 0; j--){
                if(matriz[j][i] == 0) printf("Queria que todo mundo fosse assim\n");
                else printf("Desliga o farol cidadao ( ._.)\n"); 
            }
        }
    }
}                        