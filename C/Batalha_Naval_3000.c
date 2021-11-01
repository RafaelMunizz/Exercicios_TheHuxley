#include <stdio.h>

void main(){

    int i, j, tabuleiro_1[9][9], tabuleiro_2[9][9], jogadas, afundados_1 = 0, afundados_2 = 0;
    

    scanf("%d", &jogadas);

    for (i=0; i < 9; i++){
        for (j=0; j < 9; j++){
            scanf("%d", &tabuleiro_1[i][j]);
        }
    }
    
    for (i=0; i < 9; i++){
        for (j=0; j < 9; j++){
            scanf("%d", &tabuleiro_2[i][j]);
        }
    }

    for (i=0; i < jogadas; i++){
        int linha, coluna;
        char jogada[3];

        scanf("%s", jogada);
        
        if (jogada[0] == 'A') linha = 0;
        else if (jogada[0] == 'B') linha = 1;
        else if (jogada[0] == 'C') linha = 2;
        else if (jogada[0] == 'D') linha = 3;
        else if (jogada[0] == 'E') linha = 4;
        else if (jogada[0] == 'F') linha = 5;
        else if (jogada[0] == 'G') linha = 6;
        else if (jogada[0] == 'H') linha = 7;
        else if (jogada[0] == 'I') linha = 8;

        coluna = (jogada[1] - '0') - 1;

        if ( i%2 == 0){
            if ((tabuleiro_1[linha][coluna]) == 1){

                tabuleiro_1[linha][coluna] = 0;
                afundados_1++;
            }

        } else {
            if ((tabuleiro_2[linha][coluna]) == 1){ 

                tabuleiro_2[linha][coluna] = 0;
                afundados_2++;
            }
        }
    }

    if (afundados_1 < afundados_2) printf("O jogador A venceu");
    else if (afundados_1 > afundados_2) printf("O jogador B venceu");
    else printf("Empate");
}                        