#include <stdio.h>
#include <string.h>
#include <ctype.h>

int analise(){

    int soma = 0, i = 0, tam;
    char frase[101];
    
    gets(frase);

    while(frase[i]) {
      frase[i] = tolower(frase[i]);
      i++;
    }

    tam = strlen(frase);

    for (i = 0; i < tam; i++){

        if ((frase[i] != ' ') && (frase[i] != '.') && (frase[i] != ',') && (frase[i] != '!') && (frase[i] != '?')){
            soma += frase[i];
        }
    }
    return soma;
}

int main(){

    int resultado1, resultado2;
    
    resultado1 = analise();
    resultado2 = analise();

    resultado1 == resultado2 ? printf("True") : printf("False");

    return 0;
}