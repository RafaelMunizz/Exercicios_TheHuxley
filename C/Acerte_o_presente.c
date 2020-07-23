#include <stdio.h>
#include <string.h>

typedef struct{

    char nome[20], presente_1[15], presente_2[15], presente_3[15];
} dados;

int main(){

    int i, j, participantes;
    char nome[20], presente[15];

    scanf("%d", &participantes);

    dados informacoes[participantes];

    for (i=0; i < participantes; i++){
        scanf("%s %s %s %s", informacoes[i].nome, informacoes[i].presente_1, informacoes[i].presente_2, informacoes[i].presente_3);
    }

    while (1){
        
        scanf("%s", nome);
        if (strcmp(nome, "FIM") == 0){
            break;
        }

        scanf("%s", presente);

        for (i=0; i < participantes; i++){

            if (strcmp(informacoes[i].nome, nome) == 0){

                if ((strcmp(informacoes[i].presente_1, presente) == 0) || (strcmp(informacoes[i].presente_2, presente)==0) || (strcmp(informacoes[i].presente_3, presente)==0)){
                    printf("Uhul! Seu amigo secreto vai adorar\n");
                }  else printf("Tente Novamente!\n"); 
            }
        }
    }


    return 0;
}