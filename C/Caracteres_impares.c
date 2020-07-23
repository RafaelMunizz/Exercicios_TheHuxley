#include <stdio.h>

int main(){

    int i, j = 0;
    char palavra[8], palavra2[8];

    scanf("%s", palavra);

    for (i=0; i<7; i++){

        palavra2[i] = palavra[j];
        j += 2;
    } 

    palavra2[4] = '\0';

    printf("%s", palavra2);

    return 0;
}