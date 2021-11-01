#include <stdio.h>
#include <string.h>

void main() {

    int i, newSize;
    float size;
    
    scanf("%f", &size);

    newSize = (size * 2) - 1;
    // Como cada letra tem um espaço apos ela, é necessário o dobro do tamanho fornecido.
    // -1 pois nao tem espaco apos a ultima letra.

    char template[newSize * 2], answers[newSize * 2]; // letras + espacamentos = o dobro de alocacao

    while ( strcmp( answers, "sair" ) ) { // Enquanto "answer" for diferente de "sair" (false)

        scanf(" %[^\n]", template); // Pegando entradas até ser dado enter

        if ( strlen(template) != newSize ) { // Se o tamanho do gabarito e diferente do tamanho inicial fornecido.
            printf("Gabarito de tamanho errado. Entre com o novo gabarito:\n");
            continue;
        }

        while ( strcmp( answers, "sair" ) ) {

            int sum = 0;
            float hits = 0;

            scanf(" %[^\n]", answers);

            if ( strlen(answers) != newSize && strcmp(answers, "sair")) { // Se o tamanho da resposta e diferente do tamanho inicial fornecido e diferente de "sair".
                printf("Tamanho da resposta diferente do tamanho do gabarito.\n");
                continue;
            }

            for ( i = 0; i < newSize; i++ ) {

                if ( template[i] == answers[i] && template[i] != ' ' && answers[i] != ' ') {
                    sum ++;
                }
            }
            hits = (sum / size) * 100; // acertos = soma de letras iguais dividido pela quantidade de letras vezes cem.

            if ( strcmp(answers, "sair") ) printf("Percentual de acertos: %.1f\n", hits);
        }
    }    
}