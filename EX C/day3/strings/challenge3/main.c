#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 3 : Concat�nation de Cha�nes
//�crivez un programme C qui lit deux cha�nes de caract�res et les concat�ne en une seule cha�ne. Affichez la cha�ne r�sultante.

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



