#include <stdio.h>
#include <string.h>

int main() {

    char nacionality[2], occupacion[2];
    int amountOfWeapons, caliber;

    while (1) {
        scanf("%s", nacionality);

        if (strcmp(nacionality, "Barrado") == 0) {
            continue;
        }

        if (strcmp(nacionality, "B") != 0 && strcmp(nacionality, "E") != 0) { 
            // Se a comparação for verdadeira o resultado é 0
            printf("\nFim");
            break;
        }

        scanf("%s", occupacion);
        scanf("%d", &amountOfWeapons);
        scanf("%d", &caliber);

        if ((strcmp(nacionality, "E") == 0) && amountOfWeapons != 0) {
            printf("\nBarrado");
            continue;

        } else if ((strcmp(nacionality, "E") == 0) && amountOfWeapons == 0){
            printf("\nLiberado");
            continue;
        }
        
        if (strcmp(nacionality, "B") == 0) {

            if (strcmp(occupacion, "M") == 0) {
                printf("\nLiberado");
                continue;

            } else if ((strcmp(occupacion, "T") == 0) || (strcmp(occupacion, "O") == 0)) {

                if (amountOfWeapons > 1 || caliber > 22) {
                    printf("\nBarrado");
                    continue;

                } else {
                    printf("\nLiberado");
                    continue;
                }
                    
            } else if (strcmp(occupacion, "C") == 0) {
                
                if (amountOfWeapons > 2 || caliber > 38) {
                    printf("\nBarrado");
                    continue;

                } else {
                    printf("\nLiberado");
                    continue;
                }
            }
        }
    }

    return 0;
}