#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 2 : Saisie et Affichage des �l�ments
//�crivez un programme C qui demande � l'utilisateur le nombre d'�l�ments d'un tableau,
// puis demande � l'utilisateur de saisir ces �l�ments. Affichez ensuite les �l�ments du tableau.

int main(int argc, char *argv[]) {
	
	
	int i,n ;

	printf("insert the number of the element : ");
	scanf("%d",&n);
	
	int array[n];
	
	for(i = 0 ; i <= n ;i++ )
	{
		
		printf("insert the element : %d\n",i);
		scanf("%d",&array[i]);
		
	}
    for(i = 0 ; i <= n ;i++ )
	{			
	    printf("this is the arrays number : %d\n",array[i]);
    }
	
	return 0;
}


