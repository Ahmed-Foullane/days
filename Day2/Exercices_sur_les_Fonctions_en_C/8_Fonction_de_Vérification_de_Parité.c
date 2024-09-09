// Challenge 8 : Fonction de Vérification de Parité
// Écrivez une fonction en C qui vérifie si un entier est pair ou impair.
//  La fonction doit prendre un entier en paramètre et retourner 1 si l'entier est pair et 0 s'il est impair.
//  Créez un programme principal qui utilise cette fonction pour afficher si un nombre est pair ou impair.

#include <stdio.h>

int pairOuimpair(int userInput){
    if (userInput % 2 == 0)
    {
       return 1;
    }else
    {
        return 2;
    }
    
    
}

int main(){
    int userInput;

    printf("enter a number: ");
    scanf("%d", &userInput);
   printf("%d",pairOuimpair(userInput)) ;
}

// first     printf("\n%d",userInput/100);
// second  printf("\n%d",(userInput-((userInput/100)*100))/10);
