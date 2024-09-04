#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 6 : Multiplication des Éléments
//Écrivez un programme C qui multiplie chaque élément d'un tableau d'entiers par un facteur 
//donné et affiche le tableau résultant. Le programme doit demander le nombre d'éléments, les éléments du tableau, et le facteur de multiplication.

int main(int argc, char *argv[])
{
	
		int i,n ,f;

	printf("insert the number of the element : ");
	scanf("%d",&n);
	
	int array[n];

	for(i = 0 ; i <= n ; i++)
	{
		
		printf("insert the element : %d\n",i);
		scanf("%d",&array[i]);
	} 
	
	printf("insert the factor : ");
	scanf("%d",&f);
	
	for(i = 0 ; i <= n; i++){
		
	printf("the multipication of the element is : %d\n",array[i] * f);

	}

	return 0;
}
