#include <stdio.h>

void main() {

    int rivals, turns, i, j,  winner, lessTime;

    scanf("%d %d", &rivals, &turns);

    int array[rivals][turns];

    for ( i = 0; i < rivals; i++ ) {
        for ( j = 0; j < turns; j++ ) { 
            scanf("%d", &array[i][j]);
        }
    }

    for ( i = 0; i < rivals; i++ ) {
        int sum = 0;

        for ( j = 0; j < turns; j++ ) { 
            sum += array[i][j];    
        }
        
        if (i == 0) lessTime = sum;

        if (sum <= lessTime) {
            lessTime = sum;
            winner = i + 1;
        }
    }
    printf("%d", winner);    
}