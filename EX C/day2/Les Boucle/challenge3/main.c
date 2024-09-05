#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



void Ajouter()
{
	char titre [100];
	char auteur [100];
	float prix [50];
	int quantite [50];
	int i ,n;
	
	printf("enter le nombre des liver que vous besoin d'entre : ");
	scanf("%d",&n);
	
	for(i = 0 ; i < n ;i++)
	{
	 printf("enters le titre de livre : ");
	 scanf("%s",&titre[i]);
	 
	 printf("enters le titre de auteur : ");
	 scanf("%s",&auteur[i]);
	 
	 printf("enters le prix de livre : ");
	 scanf("%f",&prix[i]);
	 
	 printf("enters le quantite : ");
	 scanf("%d",&quantite[i]);
	 

printf("%f",prix[0]);
printf("%d",quantite[0]);
	}
	
	
}
int main() {
    int choix;
//    char titre [100];
//	char auteur [100];
//	float prix [50];
//	int quantite [50];
//	int i ,n;

    printf("Menu de gestion des livres:\n");
    printf("1. Ajouter un livre au stock\n");
    printf("2. Afficher tous les livres disponibles\n");
    printf("3. Rechercher un livre par son titre\n");
    printf("4. Mettre à jour la quantité d'un livre\n");
    printf("5. Supprimer un livre du stock\n");
    printf("6. Afficher le nombre total de livres en stock\n ");
    printf("Veuillez entrer le numéro de votre choix : \n");
    
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("Vous avez choisi d'ajouter un livre au stock.\n");
             Ajouter();
            break;
        case 2:
            printf("Vous avez choisi d'afficher tous les livres disponibles.\n");
            break;
        case 3:
            printf("Vous avez choisi de rechercher un livre par son titre.\n");
            break;
        case 4:
            printf("Vous avez choisi de mettre à jour la quantité d'un livre.\n");
            break;
        case 5:
            printf("Vous avez choisi de supprimer un livre du stock.\n");
            break;
        case 6:
            printf("Vous avez choisi d'afficher le nombre total de livres en stock.\n");
            break;
        default:
            printf("Choix invalide. Veuillez entrer un numéro entre 1 et 6.\n");
            break;
    }

    return 0;
}
