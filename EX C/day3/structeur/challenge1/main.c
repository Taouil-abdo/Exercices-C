#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Challenge 1 : Définition et Utilisation de Structure

//Écrivez un programme C qui définit une structure pour représenter une personne avec les champs 
//nom, prenom, et age. Créez une variable de cette structure, assignez des valeurs aux champs, 
//et affichez ces valeurs.

int main(int argc, char *argv[]) {
	
	struct studentinfo
	{
		char nom[20];
		char prenom[20];
		int age[10];	
	};
	
	struct studentinfo stinfo;
	
	strcpy(stinfo.nom,"taouil");
	strcpy(stinfo.prenom,"abdo");
	stinfo.age[20]= 20;
	
	printf("the lastname is : %s\n and the name is : %s\n and the age is :%d",stinfo.nom , stinfo.prenom ,stinfo.age);
	
	return 0;
}
