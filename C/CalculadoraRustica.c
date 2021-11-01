#include <stdio.h>
#include <string.h>

void main() {

    float value1, value2, result = 0.0;
    char operation[15];

    scanf("%f %f %s", &value1, &value2, operation);

    if (strcmp(operation, "multiplicacao") == 0){ result = value1 * value2;
    } else if (strcmp(operation, "divisao") == 0){ result = value1 / value2;
    } else if (strcmp(operation, "subtracao") == 0){ result = value1 - value2;
    } else if (strcmp(operation, "soma") == 0){ result = value1 + value2;}

    printf("resultado = %.2f", result);
}