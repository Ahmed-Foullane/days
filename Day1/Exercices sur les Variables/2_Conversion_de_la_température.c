// Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin. Formule :

// K = C + 273.15

#include <stdio.h>

int main(){
  int k = 273.15;
  float userTemprator, temperatureInKelvin;
  

  printf("enter the temprature: ");
  scanf("%f",&userTemprator);
   temperatureInKelvin = userTemprator + k;
  printf("\nthe temprature in k is: %f",temperatureInKelvin);

  return 0;
}