// Challenge 7 : Moyenne pondérée de trois nombres
// Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés
//  par l'utilisateur avec les pondérations suivantes :

// 1er nombre : pondération 2
// 2ème nombre : pondération 3
// 3ème nombre : pondération 5

#include <stdio.h>


int main(){

  int number1, number2, number3, moyenPondere;

  printf("\nenter the number one: ");
  scanf("%d",&number1);
  printf("\nenter the number two: ");
  scanf("%d",&number2);
  printf("\nenter the number three: ");
  scanf("%d",&number3);
  moyenPondere = (number1 * 2 + number2 * 3 + number3 * 5)/(2+3+5);
  printf("le moyenne pondere est: %d", moyenPondere);
  return 0;
}