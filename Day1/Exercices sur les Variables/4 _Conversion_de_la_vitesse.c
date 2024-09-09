// Challenge 4 : Conversion de la vitesse
// Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h)
//  et la transforme en mètres par seconde (m/s). Formule :

// m/s = km/h * 0.27778

#include <stdio.h>

int main(){
  
  float userVitessInKilometrePerHour, resultMetreParSecond;
  printf("enter the vitess in kilometre: ");
  scanf("%f",&userVitessInKilometrePerHour);
  resultMetreParSecond = userVitessInKilometrePerHour * 0.27778;

  printf("the result in metre par second is: %f",resultMetreParSecond);
  
  return 0;
}