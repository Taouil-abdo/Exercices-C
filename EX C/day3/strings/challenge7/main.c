#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 7 : Conversion en Majuscules
//Écrivez un programme C qui lit une chaîne de caractères et convertit 
//tous les caractères en majuscules. Affichez la chaîne modifiée.

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


