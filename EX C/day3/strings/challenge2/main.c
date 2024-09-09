#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
int main(int argc, char *argv[]) {
	
//Challenge 2 : Longueur de la Chaîne
//Écrivez un programme C qui calcule et affiche la longueur d'une chaîne de caractères sans utiliser la fonction strlen().
   
	int counter = 0;
	char chaine[10];
    
	printf("Entrez un mot : ");
	scanf("%s",chaine);
	while (chaine[counter] != '\0') {
        counter++;          
    }
    printf("%d",counter);
	
	return 0;
}




