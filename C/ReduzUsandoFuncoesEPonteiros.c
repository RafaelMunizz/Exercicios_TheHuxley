#include <stdio.h>

void function( float *X, float *Y, float *result) {
    *result = *X - *Y;
}

void main() {

    float X, Y, result;

    scanf("%f %f", &X, &Y);

    function(&X, &Y, &result); 

    printf("%.2f %.2f", result, Y);
}
