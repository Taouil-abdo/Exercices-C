#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



//Challenge 2 : Fonction de Multiplication
//Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur produit.
// Créez un programme principal qui utilise cette fonction pour afficher le produit de deux nombres.


int produit(int a , int b)
{
	
	return a * b ;
}

int main(int argc, char *argv[]) {
	
	
	int x,y,r;
	
	printf("insert the first number : ");
	scanf("%d",&x);
	printf("insert the second number : ");
	scanf("%d",&y);
	
	r = produit(x,y);
	
	printf("the resulet of the product number : %d", r);

	
	return 0;
}
	
	



