#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Écrire le programme pour avoir un pyramide d'étoile, 
//le nombre des lignes à composer est demandé à 
//l’utilisateur.(chaque ligne doit avoir un nombre premier d'étoiles.

//Challenge 3 : Affichage des Nombres Premiers
//Écrivez un programme C qui lit un entier n et affiche tous les nombres premiers 
//de 1 à n. Un nombre est considéré premier s'il est divisible uniquement par 1 et lui-même.


//Challenge 4 : Fonction de Minimum
//Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus petit des deux. 
//Créez un programme principal qui utilise cette fonction pour afficher le minimum entre deux nombres.

int grandNumber(int a , int b )
{
	if(a > b)
	{
		a = b ;
	}
	return a;
	
}

int main()
{
   int x , y , result;
   printf("enter the fisrt number : ");
   scanf("%d",&x);
   printf("enter the second number : ");
   scanf("%d",&y); 
   
   result = grandNumber(x , y);
   printf("the begest number between %d and %d is %d ",x,y,result);

}

//Challenge 3 : Fonction de Maximum
//Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus grand des deux. 
//Créez un programme principal qui utilise cette fonction pour afficher le maximum entre deux nombres.


//int grandNumber(int a , int b )
//{
//	if(a < b)
//	{
//		a = b ;
//	}
//	return a;
//	
//}
//
//int main()
//{
//   int x , y , result;
//   printf("enter the fisrt number");
//   scanf("%d",&x);
//   printf("enter the second number");
//   scanf("%d",&y); 
//   
//   result = grandNumber(x , y);
//     printf("the begest number between %d and %d is %d ",x,y,result);
//
//	
//}


//Challenge 2 : Fonction de Multiplication
//Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur produit.
// Créez un programme principal qui utilise cette fonction pour afficher le produit de deux nombres.


//int produit(int a , int b)
//{
//	return a * b ;
//	
//}
//
//int main()
//{
//  int x , y , result;
//  printf("enter the fisrt number");
//  scanf("%d",&x);
//  printf("enter the second number");
//  scanf("%d",&y);
//  
//  
//  result = produit(x ,y);
//  printf("the produit is %d and %d is %d ",x,y,result);
//  
//}


//Challenge 1 : Fonction de Somme
//Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur somme. 
//Créez un programme principal qui utilise cette fonction pour afficher la somme de deux nombres.

#include <stdio.h>

//int sum(int a, int b) {
//    return a + b;
//}
//
//int main() {
//    int num1, num2, result;
//
//    printf("Enter the first integer: ");
//    scanf("%d", &num1);
//
//    printf("Enter the second integer: ");
//    scanf("%d", &num2);
//
//    result = sum(num1, num2);
//
//    printf("The sum of %d and %d is %d.\n", num1, num2, result);
//
//    return 0;
//}

