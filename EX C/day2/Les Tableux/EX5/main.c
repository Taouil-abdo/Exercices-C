#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 5 : Trouver le Minimum
//Écrivez un programme C qui trouve et affiche le plus petit élément dans un tableau d'entiers. Le programme doit demander le nombre d'éléments et les éléments du tableau.
//

int main(int argc, char *argv[])
{
	
		int i,n;

	printf("insert the number of the element : ");
	scanf("%d",&n);
	
	int array[n];
	int minElem = array[0];

	
	for(i = 0 ; i <= n ; i++)
	{
		
		printf("insert the element : %d\n",i);
		scanf("%d",&array[i]);
		
       if(minElem > array[i])
	   {
	   	
	   	minElem = array[i];
	   	
		}		
	} 
			printf("the smallest number in the array is : %d\n",minElem);

	return 0;
}


