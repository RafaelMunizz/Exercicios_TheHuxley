#include <stdio.h>

void main() {

    int size, i, j;

    scanf("%d", &size);

    int array[size][size];

    for ( i = 0; i < size; i++ ) {
        for ( j = 0; j < size; j++ ) { 
            scanf("%d", &array[i][j]);
        }
    }

    for ( i = 0; i < size; i++ ) {

        array[0][i] >= 0 ? printf("%d", array[0][i]) : printf("%d", array[0][i] * 2);
        
        for ( j = 1; j < size; j++ ) {   

            array[j][i] >= 0 ? printf(" %d", array[j][i]) : printf(" %d", array[j][i] * 2);
        }
        printf("\n");
    }
}