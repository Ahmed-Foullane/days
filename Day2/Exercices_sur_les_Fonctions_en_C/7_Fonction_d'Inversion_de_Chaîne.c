// Challenge 7 : Fonction d'Inversion de Chaîne
// Écrivez une fonction en C qui inverse une chaîne de caractères.
//  La fonction doit prendre une chaîne en paramètre et retourner la chaîne inversée.
//  Créez un programme principal qui utilise cette fonction pour afficher une chaîne inversée.

#include <stdio.h>
#include <string.h>

char reversString(char *str,int length){
    
    for (int i = length - 1; i >=0; i--)
    {
       printf("%s",str[i]);
    }
   
}

int main() {

  char userInput[50];
  printf("enter your text: ");
  fgets(userInput,50,stdin); 
  
 int length = strlen(userInput);
 
 printf("\n%s",reversString(userInput,length));
}