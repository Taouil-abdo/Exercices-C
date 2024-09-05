#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 5 : Fonction de Factorielle
//Écrivez une fonction en C qui calcule la factorielle d'un entier positif.
// La fonction doit prendre un entier en paramètre et retourner sa factorielle.
//  Créez un programme principal qui utilise cette fonction pour afficher la factorielle d'un nombre donné.
//



int factorial(int a )
{
	int i, v = 1;
	
	
	for( i  = 1 ; i <= a ; i++ )
	{
			v = v * i;
			
	}
	return v;
}

int main(int argc, char *argv[]) {
	
	
	int x,r;
	
	printf("insert the first number : ");
	scanf("%d",&x);
	
	printf("the resulet of the product number : %d", factorial(x));
	
	return 0;
}
	
	
