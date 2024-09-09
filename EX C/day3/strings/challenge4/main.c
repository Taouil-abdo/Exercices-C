#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 4 : Comparaison de Chaînes
//Écrivez un programme C qui lit deux chaînes de caractères et compare si elles sont égales ou non.
// Affichez un message indiquant si les chaînes sont égales ou différentes.

int main()
{
	char array[20];
	char array2[20];
	
	printf("enter la 1er chaine : ");
	scanf("%s",array);
	printf("enter la eme chaine : ");
	scanf("%s",array2);
	
	if(strcmp(array,array2)==0)
	{
		printf("il sont le meme");
	}else
	{
		printf("is sont pas le meme");
	}
	
}


