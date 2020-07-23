#include <stdio.h>

typedef struct{
    int idade, quant_amigos, quant_fotos;
    char nome[51], sexo, est_civil;
} banco_de_dados;

int main(){

    int quant_usuarios, i;

    scanf("%d", &quant_usuarios);

    banco_de_dados dados[1000];

    for (i=0; i < quant_usuarios; i++){
        
        scanf("%d", &dados[i].idade);
        scanf(" %[^\n]s", dados[i].nome);
        scanf(" %c", &dados[i].sexo);
        scanf(" %c", &dados[i].est_civil);
        scanf("%d", &dados[i].quant_amigos);
        scanf("%d", &dados[i].quant_fotos);

        printf("Idade: %d\nNome: %s\nSexo: %c\nEstado Civil: %c\nNumero de amigos: %d\nNumero de fotos: %d\n\n", 
        dados[i].idade, dados[i].nome, dados[i].sexo, dados[i].est_civil, dados[i].quant_amigos, dados[i].quant_fotos);
    }

  return 0;
}