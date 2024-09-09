// Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, prénom, âge, sexe,
//  et adresse email. Les données sont saisies à partir du clavier.

#include <stdio.h>

int main(){
   char firstName[30], lastName[30], gender[30];
   int age;

   printf("enter your first name: ");
   scanf("%s",&firstName);
   printf("enter your last name: ");
   scanf("%s",&lastName);
   printf("enter your age: ");
   scanf("%d",&age);
   printf("enter your gender: ");
   scanf("%s",&gender);
   
   printf("\nyour first name is: %s",firstName);
   printf("\nyour last name is: %s",lastName);
   printf("\nyour age: %s",firstName);
   printf("\nyour gender is: %s",firstName);
  return 0;
}

