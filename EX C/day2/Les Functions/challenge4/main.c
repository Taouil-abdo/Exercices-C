#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 4 : Fonction de Minimum
//�crivez une fonction en C qui prend deux entiers en param�tres et retourne le plus petit des deux.
// Cr�ez un programme principal qui utilise cette fonction pour afficher le minimum entre deux nombres.
//



int petitN(int a , int b)
{
	if(a>b)
	{
		a = b;
	}
	return a;
}

int main(int argc, char *argv[]) {
	
	
	int x,y,r;
	
	printf("insert the first number : ");
	scanf("%d",&x);
	printf("insert the second number : ");
	scanf("%d",&y);
	
	printf("the resulet of the product number : %d", petitN(x,y));
	
	return 0;
}

	
