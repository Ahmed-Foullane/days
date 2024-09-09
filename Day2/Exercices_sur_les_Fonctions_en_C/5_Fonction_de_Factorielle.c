// Challenge 5 : Fonction de Factorielle
// Écrivez une fonction en C qui calcule la factorielle d'un entier positif. La fonction doit prendre un entier en paramètre et retourner sa factorielle.
//  Créez un programme principal qui utilise cette fonction pour afficher la factorielle d'un nombre donné.

#include <stdio.h>

int factorialNum(int num){
    int result = 1;
    if (num < 0)
    {
        return 0;
    }
    
    if (num == 0)
    {
        return 1;
    }

    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }

    return result;
    
}
int main(){
   int userNumber;
   printf("enter a number to calculat the factorial: ");
   scanf("%d",&userNumber);
   printf("\n%d",factorialNum(userNumber));
}