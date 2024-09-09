// Challenge 5 : Affichage Température
// Écrivez un programme qui demande la température en Celsius et affiche
// l'état de l'eau à cette température (solide, liquide, gaz). Règle :

// C < 0 : Solide
// 0 <= C < 100 : Liquide
// C >= 100 : Gaz


#include <stdio.h>

int main(){
    float userTemprator;

    printf("enter the temperature in celsius: ");
    scanf("%f",&userTemprator);

    if (userTemprator < 0)
    {
      printf("solide");
    }
    if (userTemprator >= 0 && userTemprator < 100)
    {
      printf("liquide");
    }
    if (userTemprator >= 100)
    {
      printf("gaz");
    }
    
    
  return 0;
}