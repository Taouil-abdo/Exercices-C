#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



//Challenge 3 : Fonction de Maximum
//Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus grand des deux.
// Créez un programme principal qui utilise cette fonction pour afficher le maximum entre deux nombres.
//

int grandN(int a , int b)
{
	if(a<b)
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
	
	printf("the resulet of the product number : %d", grandN(x,y));
	
	return 0;
}





