#include <stdio.h>

void main(){

    int i, locais, tempo_ida[100], espera[100], resultado, aux;

    scanf("%d", &locais);

    for (i=0; i<locais; i++) scanf("%d", &tempo_ida[i]);
    for (i=0; i<locais; i++) scanf("%d", &espera[i]);

    resultado = tempo_ida[0];

    for (i=0; i< locais - 1; i++){
        
        aux = espera[i+1]; // aux será o valor de espera do onibus

        if (resultado < espera[i+1]){
            resultado = espera[i+1] + tempo_ida[i+1];

        } else {
            int cont = 1;
            while (resultado > aux * cont) cont++; // descobrindo quantas vezes será necessário multiplicar o valor de chegada
            aux = aux * cont; // aux passa a ser maior que o valor da chegada anterior, para ser feita a subtracao

            resultado = aux + tempo_ida[i+1];
        }
    }
    printf("%d", resultado);
}