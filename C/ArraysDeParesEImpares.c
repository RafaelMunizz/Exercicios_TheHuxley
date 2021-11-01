#include <stdio.h>

void function( int *arrayOdds, int *arrayEvens) {

    int input, i, j, countOdds = 0, countEvens = 0;

    for ( i = 0; i < 15; i++) {
        
        scanf("%d", &input);

        if (input %2 == 0) {
            arrayEvens[countEvens] = input;
            countEvens++;
        
        } else {
            arrayOdds[countOdds] = input;
            countOdds++;
        }

        if (countOdds == 5) {

            for ( j = 0; j < 5; j++) {
                printf("impar[%d] = %d\n", j, arrayOdds[j]);
            }
            countOdds = 0;
            j = 0;

        } else if (countEvens == 5) {

            for ( j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, arrayEvens[j]);
            }
            countEvens = 0;
            j = 0;
        } 

        if (i == 14) {
            for ( j = 0; j < countOdds; j++) {
                printf("impar[%d] = %d\n", j, arrayOdds[j]);
            }
            countOdds = 0;
            j = 0;
            for ( j = 0; j < countEvens; j++) {
                printf("par[%d] = %d\n", j, arrayEvens[j]);
            }
            countEvens = 0;
            j = 0;
        }
    }
}

void main() {

    int arrayOdds[5], arrayEvens[5];

    function(arrayOdds, arrayEvens);
}