#include <stdio.h>
#include <string.h>

void translate( int *phrase, char *newPhrase, int tamanho ) {

    int i;
    char listChar[] = {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    for (i = 0; i< tamanho; i++){
        newPhrase[i] = listChar[phrase[i]];
    }
    newPhrase[i] = '\0';
}   

void main() {

    int i = 0;
    int phrase[100];
    int numero;
    char proxChar, newPhrase[100];

    while(1) {

        while(scanf("%d%c", &numero, &proxChar) == 2) { 
                phrase[i] = numero;
                i++;
                if(proxChar == '\n') break; 
        }
   
        translate(phrase, newPhrase, i);

        if (strcmp(newPhrase, "fi") == 0){
            break;
        }

        printf("%s\n", newPhrase);

        i = 0;
    }
}
