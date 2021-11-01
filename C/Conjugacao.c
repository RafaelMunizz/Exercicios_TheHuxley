#include <stdio.h>
#include <string.h>

void print(int size, char verb[15]) {

    int i;

    for (i = 0; i < size; i++){
        printf("%c", verb[i]);
    }
}

void main() {

    char verb[15];

    scanf("%s", verb);

    int size = strlen(verb) -1;

    print(size, verb);
    printf(" ");
    print(size, verb);
    printf("ndo");
}