#include <stdio.h>

int main(void) {

  int e1, e2, e3, e4, e5, voto10 = 0, voto20 = 0, voto30 = 0, voto40 = 0, voto50 = 0, vb = 0, vn = 0;
  printf("Eleição para Governador - Lista de Candidatos:\n10 - Antônio Pereira\n20 - Maria Daiana\n30 - Ricardo Peixoto\n40 - Rosa Souza\n0 - Voto em Branco\nOutro número - Voto nulo\n");

  printf("\nEleitor 1 vai votar: ");
  scanf("%d", &e1);
  if(e1 == 10){
    voto10++;
  } else if (e1 == 20){
    voto20++;
  } else if (e1 == 30){
    voto30++;
  } else if (e1 == 40){
    voto40++;
  } else if (e1 == 0){
    vb++;
  } else {
    vn++;
  }

  printf("Eleitor 2 vai votar: ");
  scanf("%d", &e2);
  if(e2 == 10){
    voto10++;
  } else if (e2 == 20){
    voto20++;
  } else if (e2 == 30){
    voto30++;
  } else if (e2 == 40){
    voto40++;
  } else if (e2 == 0){
    vb++;
  } else {
    vn++;
  }

  printf("Eleitor 3 vai votar: ");
  scanf("%d", &e3);
  if(e3 == 10){
    voto10++;
  } else if (e3 == 20){
    voto20++;
  } else if (e3 == 30){
    voto30++;
  } else if (e3 == 40){
    voto40++;
  } else if (e3 == 0){
    vb++;
  } else {
    vn++;
  }

  printf("Eleitor 4 vai votar: ");
  scanf("%d", &e4);
  if(e4 == 10){
    voto10++;
  } else if (e4 == 20){
    voto20++;
  } else if (e4 == 30){
    voto30++;
  } else if (e4 == 40){
    voto40++;
  } else if (e4 == 0){
    vb++;
  } else {
    vn++;
  }

  printf("Eleitor 5 vai votar: ");
  scanf("%d", &e5);
  if(e5 == 10){
    voto10++;
  } else if (e5 == 20){
    voto20++;
  } else if (e5 == 30){
    voto30++;
  } else if (e5 == 40){
    voto40++;
  } else if (e5 == 0){
    vb++;
  } else {
    vn++;
  }

  printf("\nVotos para Antônio Pereira: %d\n", voto10);
  printf("Votos para Maria Daiana: %d\n", voto20);
  printf("Votos para Ricardo Peixoto: %d\n", voto30);
  printf("Votos para Rosa Souza: %d\n", voto40);
  printf("Votos em Branco: %d\n", vb);
  printf("Votos Nulos: %d\n", vn);

  if(voto10 > voto20 && voto10 > voto30 && voto10 > voto40){
    printf("Vitória de Antônio Pereira");
  } else if (voto20 > voto10 && voto20 > voto30 && voto20 > voto40){
    printf("Vitória de Maria Daiana");
  } else if (voto30 > voto10 && voto30 > voto20 && voto30 > voto40){
    printf("Vitória de Ricardo Peixoto");
  } else if(voto40 > voto10 && voto40 > voto20 && voto40 > voto30){
    printf("Vitória de Rosa Souza");
  } else if (voto10 == voto20){
    printf("Empate entre Antônio Pereira e Maria Daiana");
  } else if (voto10 == voto30){
    printf("Empate entre Antônio Pereira e Ricardo Peixoto");
  } else if (voto10 == voto40){
    printf("Empate entre Antônio Pereira e Rosa Souza");
  } else if (voto20 == voto30){
    printf("Empate ente Maria Daiana e Ricardo Peixoto");
  } else if (voto20 == voto40){
    printf("Empate entre Maria Daiana e Rosa Souza");
  } else if (voto30 == voto40){
    printf("Empate entre Ricardo Peixoto e Rosa Souza");
  }
}