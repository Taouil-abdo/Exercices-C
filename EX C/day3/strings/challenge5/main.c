#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 5 : Inversion de Chaîne
//Écrivez un programme C qui lit une chaîne de caractères et affiche la chaîne inversée. 
//Par exemple, si la chaîne est "abcd", le programme doit afficher "dcba".

int main ()
{
	char str[10]="hello";
	int t = 0 , i;
	
	t = strlen(str);
	
	for(i = t ; i >= 0 ; i--)
	{
		printf("%c",str[i]);
	}
}


