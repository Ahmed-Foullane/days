// Challenge 6 : Fonction de Fibonacci
// Écrivez une fonction en C qui calcule le n-ième terme de la suite de Fibonacci.
//  La fonction doit prendre un entier en paramètre et retourner le n-ième terme.
//  Créez un programme principal qui utilise cette fonction pour afficher le terme de Fibonacci demandé.
#include <stdio.h>


int Fibonacci(int num, int tableau[100]){

    if (num < 1)
    {
        printf("enter number greater then 2!!");
        return 0;
    }

    if (num == 2)
    {
        printf("[0,1]");
        return 0;
    }
    
    
    int num1, num2, sum;
    for (int i = 2; i < num; i++)
    {
        num1 = tableau[i -2] ;
        num2 = tableau[i - 1];
        sum = num1+num2;
        tableau[i] = sum;
    }
    
    printf("\n[");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",tableau[i]);
    }
    
    printf("]");
}



int main(){
    int table[100] = {0,1};
    int userNumber;
    printf("enter a number: ");
    scanf("%d", &userNumber);
    Fibonacci(userNumber,table);
    return 0;
}