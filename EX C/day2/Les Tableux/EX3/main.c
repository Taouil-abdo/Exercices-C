#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 3 : Somme des �l�ments
//�crivez un programme C qui calcule et affiche la somme des �l�ments d'un tableau d'entiers. 
//Le programme doit demander le nombre d'�l�ments, puis les �l�ments du tableau, et afficher la somme totale.
//
 int main(int argc, char *argv[]) {
	
		int i,n ,s=0;

	printf("insert the number of the element : ");
	scanf("%d",&n);
	
	int array[n];
	
	for(i = 0 ; i <= n ;i++ )
	{
		
		printf("insert the element : %d\n",i);
		scanf("%d",&array[i]);
		
		s = s + array[i]; 
		
	}
		printf("this is the arrays number : %d\n",s);
	
	return 0;
}

