#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 5 : Inversion de Cha�ne
//�crivez un programme C qui lit une cha�ne de caract�res et affiche la cha�ne invers�e. 
//Par exemple, si la cha�ne est "abcd", le programme doit afficher "dcba".

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


