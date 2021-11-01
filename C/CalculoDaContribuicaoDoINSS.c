#include <stdio.h>

int main() {

    float salary = 0, result = 0;

    scanf("%f", &salary);

    if ( salary >= 0 && salary <= 1751.808 ) {
        result = salary * 0.08;

    } else if ( salary >= 1751.809 && salary <= 2919.728 ) {
        result = salary * 0.09;

    } else if ( salary >= 2919.729 && salary <= 5839.45 ) {
        result = salary * 0.11;

    } else {
        result = 642.339478;
    }

    printf("Desconto do INSS: R$ %.6f", result);

    return 0;
}