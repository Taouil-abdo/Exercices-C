#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 7 : Conversion en Majuscules
//�crivez un programme C qui lit une cha�ne de caract�res et convertit 
//tous les caract�res en majuscules. Affichez la cha�ne modifi�e.

int main()
{
	int i;
	char str[10];
	printf("insert");
	scanf("%s",str);
	
	 for (i = 0; str[i] != '\0'; i++)
	  {
	 	if(str[i] == 0 )
	 	{
	 		str[i] = toupper(str[i]);  
		}
      }
        printf("La chaine en majuscules est : %s\n", str);

}


