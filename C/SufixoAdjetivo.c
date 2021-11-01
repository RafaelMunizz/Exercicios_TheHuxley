#include <stdio.h>
#include <string.h>

void function(char *word) {

    word[strlen(word) - 3] = '\0';
}

char main(){

    char word[15];

    scanf("%s", word);

    function(word);

    printf("Aquilo que %s.", word);
}