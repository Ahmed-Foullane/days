// Challenge 2 : Fonction de Multiplication
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur produit.
//  Créez un programme principal qui utilise cette fonction pour afficher le produit de deux nombres.

#include <stdio.h>

int multiTwoNumbers(int fN,int sN){
    return fN * sN;
}
int main(){
    int firstNum,secondNum;
    printf("enter two number to multiple\n");
    printf("enter the first number: ");
    scanf("%d",&firstNum);
    printf("\nenter the second number: ");
    scanf("%d",&secondNum);
    printf("\nresult = %d",multiTwoNumbers(firstNum,secondNum));

}