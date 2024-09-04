#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 1 : Initialisation et Affichage
//Écrivez un programme C qui initialise un tableau d'entiers avec des valeurs données et affiche ces valeurs.
// Par exemple, vous pouvez initialiser un tableau avec les valeurs [1, 2, 3, 4, 5] et afficher chaque valeur sur une nouvelle ligne.

int main(int argc, char *argv[]) {
	
	
	int array[]={1,2,3,4,5,6};
	int i ;
	
	for(i = 0 ; i <= 5 ;i++ )
	{
		
		printf("this is the arrays number : %d\n",array[i]);
		
	}
	return 0;
}


