#include <stdio.h>
#include <string.h>

struct pokemon{
  char nome[15];
  int id, ataque, vida;
};

int main(){

  int i;
  char poke_blue[15], poke_red[15];

  //Seis pokémons para cada jogador
  struct pokemon pk_red[6];
  struct pokemon pk_blue[6];

  // Capturando dados dos pokémons dos dois jogadores
  for (i=0; i<6; i++) scanf("%s %d %d %d", pk_red[i].nome, &pk_red[i].id, &pk_red[i].ataque, &pk_red[i].vida);
  for (i=0; i<6; i++) scanf("%s %d %d %d", pk_blue[i].nome, &pk_blue[i].id, &pk_blue[i].ataque, &pk_blue[i].vida);

  // Calculando maior ataque dos jogadores
  int maior_ataque_red = pk_red[0].ataque, maior_ataque_blue = pk_blue[0].ataque;

  for (i=1; i<6; i++){

    if (maior_ataque_red < pk_red[i].ataque) maior_ataque_red = pk_red[i].ataque;
    if (maior_ataque_blue < pk_blue[i].ataque) maior_ataque_blue = pk_blue[i].ataque;
  }

  // Calculando pokémons que tem o maior ataque com o menor menor ID e a sua vida.
  int menor_id_red = 1000, menor_id_blue = 1000, vida_red, vida_blue;

   for (i=0; i<6; i++){

    if (pk_red[i].ataque == maior_ataque_red){
      if (menor_id_red > pk_red[i].id){

        strcpy(poke_red, pk_red[i].nome);
        menor_id_red = pk_red[i].id;
        vida_red = pk_red[i].vida;
      }
    }
    
    if (pk_blue[i].ataque == maior_ataque_blue){ 
      if (menor_id_blue > pk_blue[i].id){

        strcpy(poke_blue, pk_blue[i].nome);
        menor_id_blue = pk_blue[i].id;
        vida_blue = pk_blue[i].vida;
      }
    }
  }

  printf("Pokemon do Red: %s\nPokemon do Blue: %s", poke_red, poke_blue);

  // Calculando o vencedor da batalha
  char resultado[7];

  if ((vida_blue / maior_ataque_red) > (vida_red / maior_ataque_blue)) strcpy(resultado, "Blue");
  else if ((vida_blue / maior_ataque_red) < (vida_red / maior_ataque_blue)) strcpy(resultado, "Red");
  else strcpy(resultado, "Empate");

  strcmp(resultado, "Empate") ? printf("Vencedor: %s", resultado) : printf("%s", resultado);
  
  return 0;
}