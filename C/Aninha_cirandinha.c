#include <stdio.h>

void main(){

    int casos, k;

    scanf("%d", &casos);

    for (k=0; k < casos; k++){

        int participantes, vetor[200], horario = 0, anti_horario = 0, i;

        scanf("%d", &participantes);

        for (i=0; i < participantes; i++) scanf("%d", &vetor[i]);

        if ( participantes == 1) horario++;

        else {

            for (i = 1; i < participantes; i++){

                if (vetor[i-1] == (vetor[i] - 1)) horario++;

                else if (vetor[i-1] == (vetor[i] + 1)) anti_horario++; 

            }

            if (vetor[participantes - 1] == (vetor[0] - 1)) horario++;

            else if (vetor[participantes - 1] == (vetor[0] + 1)) anti_horario++;

        }
        
        if ((horario + anti_horario + 1) != participantes && participantes != 1) printf("NAO\n");
        else if (horario > anti_horario) printf("SIM, HORARIO\n");
        else if (horario < anti_horario) printf("SIM, ANTI-HORARIO\n");
    }
}