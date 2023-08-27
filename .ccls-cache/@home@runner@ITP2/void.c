#include <stdio.h>


int main(){
  char oitavas[8], quartas[4], semi[2];
  int res1, res2;

  printf("\n16 times participaram de uma competicao, digite o resultado de cada jogo: \n");
  scanf("%d %d", &res1, &res2);
  if(res1>res2){
    oitavas[0]= 'A';
  }else{
    oitavas[0]= 'B';
    printf("\nO time %c ganhou de %d a %d\n\n", oitavas[0], res1, res2);

    scanf("%d %d", &res1, &res2);
        if(res1>res2){
            oitavas[1]= 'C';
            }else oitavas[1]= 'D';
    printf("\nO time %c ganhou de %d a %d\n\n", oitavas[1], res1, res2);

    scanf("%d %d", &res1, &res2);
        if(res1>res2){
            oitavas[2]= 'E';
            }else oitavas[2]= 'F';
    printf("\nO time %c ganhou de %d a %d\n\n", oitavas[2], res1, res2);

    scanf("%d %d", &res1, &res2);
        if(res1>res2){
            oitavas[3]= 'G';
            }else oitavas[3]= 'H';
    printf("\nO time %c ganhou de %d a %d\n\n", oitavas[3], res1, res2);

    scanf("%d %d", &res1, &res2);
        if(res1>res2){
            oitavas[4]= 'I';
            }else oitavas[4]= 'J';
    printf("\nO time %c ganhou de %d a %d\n\n", oitavas[4], res1, res2);

    scanf("%d %d", &res1, &res2);
        if(res1>res2){
            oitavas[5]= 'K';
            }else oitavas[5]= 'L';
    printf("\nO time %c ganhou de %d a %d\n\n", oitavas[5], res1, res2);

  scanf("%d %d", &res1, &res2);
  if(res1>res2){
    oitavas[6]= 'M';
  }else{
   oitavas[6]= 'N'; 
  }
  printf("\nO time %c ganhou de %d a %d\n\n", oitavas[6], res1, res2);

  scanf("%d %d", &res1, &res2);
  if(res1>res2){
    oitavas[7]= 'O';
  }else{ 
    oitavas[7]= 'P';
    }
  printf("\nO time %c ganhou de %d a %d\n\n", oitavas[7], res1, res2);
  printf("\n - As equipes %c, %c, %c, %c, %c, %c, %c e %c foram classificadas - n", oitavas[0],oitavas[1]);

  return 0
}