#include <stdio.h>

int main() {

    int percent;
    float finalSalary, rise, initialSalary;

    scanf("%f", &initialSalary);

    if ( initialSalary >= 0 && initialSalary <= 280 ) {
        rise = initialSalary * 0.20;
        percent = 20;

    } else if ( initialSalary >= 281 && initialSalary <= 700 ) {
        rise = initialSalary * 0.15;
        percent = 15;

    } else if ( initialSalary >= 701 && initialSalary <= 1500 ) {
        rise = initialSalary * 0.10;
        percent = 10;

    } else {
        rise = initialSalary * 0.05;
        percent = 5;  
    }

    finalSalary = initialSalary + rise;

    printf("%.2f\n%d\n%.2f\n%.2f", initialSalary, percent, rise, finalSalary);

    return 0;
}