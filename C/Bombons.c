#include <stdio.h>

int main () {

    int i, value[3], amount[3];
    float  count = 0;

    for (i = 0; i < 3; i++) {
        scanf ("%d", &value[i]);
    }

    for (i = 0; i < 3; i++) {
        scanf ("%d", &amount[i]);
    }

    for (i = 0; i < 3; i++) {
        count += value[i] * amount[i];
    }

    printf("Valor: R$%.2f", count);
    
    return 0;
}