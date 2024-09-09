#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 3 : Concaténation de Chaînes
//Écrivez un programme C qui lit deux chaînes de caractères et les concatène en une seule chaîne. Affichez la chaîne résultante.

int main()
{
	char chain[20];
	char chain2[20];
	char result[100];
	int i ;
	
	printf("entrer 1er mot : ");
	scanf("%s",chain);
	strcat(result,chain);

	printf("enter la 2eme mot : ");
	scanf("%s",chain2);
	strcat(result,chain2);
	
	printf("%s",result);
}



