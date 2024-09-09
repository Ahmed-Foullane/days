// Challenge 1 : Fonction de Somme
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur somme.
//  Créez un programme principal qui utilise cette fonction pour afficher la somme de deux nombres.

#include <stdio.h>

int addTwoNumbers(int fN,int sN){
    return fN + sN;
}
int main(){
    int firstNum,secondNum;
    printf("enter two number to add\n");
    printf("enter the first number: ");
    scanf("%d",&firstNum);
    printf("\nenter the second number: ");
    scanf("%d",&secondNum);
    printf("\nsum = %d",addTwoNumbers(firstNum,secondNum));

}
