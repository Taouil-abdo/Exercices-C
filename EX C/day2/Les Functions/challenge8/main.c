#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//Challenge 8 : Fonction de Vérification de Parité
//Écrivez une fonction en C qui vérifie si un entier est pair ou impair.
// La fonction doit prendre un entier en paramètre et retourner 1 si l'entier est pair et 0 s'il est impair.
//  Créez un programme principal qui utilise cette fonction pour afficher si un nombre est pair ou impair.


int pairImpair(int a)
{
	
             if(a % 2 == 0){
             	
             	return 1;
			 }	
			 
			 else {
			 	
			 	return 0;
			 }
	
}
int main(int argc, char *argv[]) {
	
	
	int i , x , r ;
	
	
	printf("insert the number : ");
	scanf("%d",&x);
	
	r = pairImpair(x);
	
	printf("%d",r);
	return 0;
	
}
