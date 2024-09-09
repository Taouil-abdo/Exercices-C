#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
//Challenge 1 : Affichage d'une Chaîne
//Écrivez un programme C qui lit une chaîne de caractères entrée par l'utilisateur et l'affiche à l'écran.


	char chaine[50];

    printf("Entrez un mot : ");
	scanf("%s",chaine);
	printf("this the output %s",chaine);
	
	return 0;
}



