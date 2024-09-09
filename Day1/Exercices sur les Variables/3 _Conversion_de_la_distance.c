// Challenge 3 : Conversion de la distance
// Écrivez un programme qui demande la distance en kilomètres et la transforme en yards. Formule :

#include <stdio.h>

int main(){
  float userDistanceInKilometr, resultInYard;
  printf("enter distance in kilometr: ");
  scanf("%f",&userDistanceInKilometr);
  resultInYard = userDistanceInKilometr * 1093,61;
  printf("the result in yards is: %f", resultInYard);
  
  return 0;
}