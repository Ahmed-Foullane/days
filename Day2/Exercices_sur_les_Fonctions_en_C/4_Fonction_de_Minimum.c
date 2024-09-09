// Challenge 4 : Fonction de Minimum
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus petit des deux.
//  Créez un programme principal qui utilise cette fonction pour afficher le minimum entre deux nombres.


#include <stdio.h>

int minNum(int first,int second){
    return first < second?first:second;
}

int main(){
    int firstNum,secondNum;
    printf("enter two number to compar\n");
    printf("enter the first number: ");
    scanf("%d",&firstNum);
    printf("\nenter the second number: ");
    scanf("%d",&secondNum);
    printf("\n %d is smaller",minNum(firstNum,secondNum));
}