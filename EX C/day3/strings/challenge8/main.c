#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 8 : Conversion en Minuscules
//�crivez un programme C qui lit une cha�ne de caract�res et 
//convertit tous les caract�res en minuscules. Affichez la cha�ne modifi�e.

int main()
{
	int i ;
	char str[50];
	
	printf("insert the word : ");
	scanf("%s",str);
	for(i = 0 ; i < 50;i++)
	{
		str[i]=tolower(str[i]);
	}
        printf("La chaine en minuscules est : %s\n", str);
        
	return 0;
}
