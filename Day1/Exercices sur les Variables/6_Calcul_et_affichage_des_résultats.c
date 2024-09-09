// Challenge 6 : Calcul et affichage des résultats
// Deux nombres réels, a et b, sont saisis au clavier.
// Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.

#include <stdio.h>

int main(){
    float a, b;
    
    
    printf("enter the a number: ");
    scanf("%f",&a);
    printf("enter the b number: ");
    scanf("%f",&b);

    printf("\na + b = %f",a+b);
    if (b == 0)
    {
      printf("a / b is not possible" );
    }else
    {
    printf("\na / b = %f",a/b);
    }
    
    
    printf("\na - b = %f",a-b);
    printf("\na * b = %f",a*b);

  return 0;
}