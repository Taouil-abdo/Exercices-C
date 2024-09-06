#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



    char titre [50][100];
	char auteur [50][100];
	float prix [50];
	int quantite [50];
	int i ,n;


void Ajouter()
{

    printf("enter le nombre des liver que vous besoin d'entre : ");
	scanf("%d",&n);
	
	for(i = 0 ; i < n ;i++)
	{
	 printf("enters le titre de livre : ");
	 scanf("%s",titre[i]);
	 
	 printf("enters le titre de auteur : ");
	 scanf("%s",auteur[i]);
	 
	 printf("enters le prix de livre : ");
	 scanf("%f",&prix[i]);
	 
	 printf("enters le quantite : ");
	 scanf("%d",&quantite[i]);
	 
	 printf("==================================== \n");
	 
	}
	
}


void Afficher()
{
	
   for(i = 0 ; i < n ; i++)
  {
	 printf("liver id : %d\n",i+1);
	 printf("le titre de livre est : %s\n",titre[i]);
	 printf("lauteur est : %s\n ",auteur[i]);
	 printf("le praix est : %.1f\n", prix[i]);
	 printf("le qutitey est : %d\n" , quantite[i]);
	
	 printf("==================================== \n");
  }
	
}

void RechercherlivrePartitre(){
	
	char recherche[100];
	printf("enter le titre de livre pour recherche : ");
	scanf("%s",recherche);
	
	for(i = 0 ; i < n ; i++)
	{
		if(strcmp(recherche,titre[i])==0)
		{
			printf("Livre trouve:\n");
            printf("Titre: %s\n", titre[i]);
            printf("Auteur: %s\n", auteur[i]);
            printf("Prix: %.2f\n", prix[i]);
            printf("Quantite: %d\n", quantite[i]);
		}
	}
	
}

void MettreJourQuantite() {
	
    char recherche[100];
    printf("enter le titre du livre pour mettre a jour la quantite: ");
    scanf("%s", recherche);

    for (i = 0; i < n; i++) {
        if (strcmp(recherche, titre[i]) == 0) {
            printf("enter la nouvelle quantite pour le livre '%s': ", titre[i]);
            scanf("%d", &quantite[i]);            
        }
    }
        printf("invalide titre de Livre .\n");
}

void SupprimerLivre()
{
	
	
}

void AfficherNombreTotalLivres()
{
	
	
}



int main() {
    int choix;

do{
	

    printf("========== Menu de gestion des livres: =====================\n\n\n");
    printf("1. Ajouter un livre au stock\n");
    printf("2. Afficher tous les livres disponibles\n");
    printf("3. Rechercher un livre par son titre\n");
    printf("4. Mettre a jour la quantite d'un livre\n");
    printf("5. Supprimer un livre du stock\n");
    printf("6. Afficher le nombre total de livres en stock\n\n\n ");
    printf("Veuillez entrer le numero de votre choix : \n");
    
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("Vous avez choisi d'ajouter un livre au stock.\n");
             Ajouter();
            break;
        case 2:
            printf("Vous avez choisi d'afficher tous les livres disponibles.\n");
            Afficher();
            break;
        case 3:
            printf("Vous avez choisi de rechercher un livre par son titre.\n");
            RechercherlivrePartitre();
            break;
        case 4:
            printf("Vous avez choisi de mettre à jour la quantité d'un livre.\n");
            MettreJourQuantite();
            break;
        case 5:
            printf("Vous avez choisi de supprimer un livre du stock.\n");
            SupprimerLivre();
            break;
        case 6:
            printf("Vous avez choisi d'afficher le nombre total de livres en stock.\n");
            AfficherNombreTotalLivres();
            break;
        default:
            printf("Choix invalide. Veuillez entrer un numéro entre 1 et 6.\n");
            break;
    }
}while(1);
    return 0;
}
