#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
//	Challenge 1 : Fonction de Somme
//Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur somme.
// Créez un programme principal qui utilise cette fonction pour afficher la somme de deux nombres.


int somme(int a , int b)
{
	return a+b;
}

int main(int argc, char *argv[]) {

	int x , y , r ;
	
	printf("insert the first number : ");
	scanf("%d",&x);
	printf("insert the second number : ");
	scanf("%d",&y);
	
	
	r = somme(x,y);
	
	printf("the result is : %d" , r); 
	
	return 0;
}




