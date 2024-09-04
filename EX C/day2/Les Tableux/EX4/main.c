#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 4 : Trouver le Maximum
//Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau d'entiers. Le programme doit demander le nombre d'éléments et les éléments du tableau.
//

int main(int argc, char *argv[])
{
	
		int i,n;

	printf("insert the number of the element : ");
	scanf("%d",&n);
	
	int array[n];
	int maxElem = 0;

	
	for(i = 0 ; i <= n ; i++)
	{
		
		printf("insert the element : %d\n",i);
		scanf("%d",&array[i]);
		
       if(maxElem < array[i])
	   {
	   	
	   	maxElem = array[i];
	   	
		}		
	} 
			printf("the big number in the array is : %d\n",maxElem);

	return 0;
}


