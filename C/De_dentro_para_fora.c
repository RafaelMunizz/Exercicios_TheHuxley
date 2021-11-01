#include <stdio.h>
#include <string.h>

int main(){

    int casos, i, j, k;

    scanf("%d ", &casos);

    for (k = 0; k < casos; k++){
        int tam = 0, cont = 0;
        char frase[101], nova_frase[101];

        gets(frase);
        
        tam = strlen(frase);

        for (i = (tam / 2) - 1; i >= 0; i--, cont++) nova_frase[cont] = frase[i];
        for (i = tam - 1; i > (tam / 2) - 1; i--, cont++) nova_frase[cont] = frase[i];

        nova_frase[tam] = '\0';
        
        printf("%s\n", nova_frase);
    }
    
    return 0;
}