#include <stdio.h>

void main () {
  
    int enemy_A, enemy_B, enemy_C, energy, energy_limit;
    char weapon[2];

    scanf("%d %d %d %d %c", &enemy_A, &enemy_B, &enemy_C, &energy, weapon);

    energy_limit = energy * 0.3;

    while (( enemy_A >= 0 || enemy_B >= 0 || enemy_C >= 0 ) && ( energy >= 0 )) {

        if ( weapon[0] == 'C' ) {
            
            if (enemy_A >= 0) {enemy_A -= 40; energy >= energy_limit ? (energy -= 15) : (energy -= 30);}
            if (enemy_B >= 0) {enemy_B -= 40; energy >= energy_limit ? (energy -= 15) : (energy -= 30);}
            if (enemy_C >= 0) {enemy_C -= 40; energy >= energy_limit ? (energy -= 15) : (energy -= 30);}

        } else if ( weapon[0] == 'V' ) {
            
            if (enemy_A >= 0) {enemy_A -= 50; energy >= energy_limit ? (energy -= 20) : (energy -= 40);}
            if (enemy_B >= 0) {enemy_B -= 50; energy >= energy_limit ? (energy -= 20) : (energy -= 40);}
            if (enemy_C >= 0) {enemy_C -= 50; energy >= energy_limit ? (energy -= 20) : (energy -= 40);}
        } 
    }
    
    if (energy <= 0) { printf("Que pena... Era um jovem tao promissor");
    } else if ( enemy_A <= 0 && enemy_B <= 0 && enemy_C <= 0 ) printf("Eba! Pedro sobreviveu");
}