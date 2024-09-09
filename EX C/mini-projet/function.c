#include <stdio.h>
#include <stdlib.h>
#include "function.h"

	char titre [50][100];
	char auteur [50][100];
	float prix [50];
	int quantite [50];
	int i ,n;
	int counter = 0;

void Ajouter()
{

   again :
   	
	 printf("enters le titre de livre : ");
	 scanf("%s",titre[counter]);
	 
	 printf("enters le titre de auteur : ");
	 scanf("%s",auteur[counter]);
	 
	 printf("enters le prix de livre : ");
	 scanf("%f",&prix[counter]);
	 
	 printf("enters le quantite : ");
	 scanf("%d",&quantite[counter]);
	 
	 counter++;
	 
	 printf("==================================== \n");
	 
}


void Afficher()
{
	
   for(i = 0 ; i < counter ; i++)
  {
	 printf("liver id : %d\n",i+1);
	 printf("le titre de livre est : %s\n",titre[i]);
	 printf("lauteur est : %s\n ",auteur[i]);
	 printf("le praix est : %.1f\n", prix[i]);
	 printf("le qutitey est : %d\n" , quantite[i]);
	
	 printf("==================================== \n");
  }
	
}

void RechercherlivrePartitre()
{
	
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

void MettreJourQuantite() 
{
	
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
	char recherche[100];
    printf("enter le titre du livre pour supprimer : ");
    scanf("%s", recherche);

    for (i = 0; i < n; i++) {
        if (strcmp(recherche, titre[i]) == 0) {
        	
        	while(i < n)
        	{
        		strcop(titre[i],titre[i+1]);
        		strcop(auteur[i],auteur[i+1]);
        		      prix[i]=prix[i+1];
        		      quantite[i]=quantite[i+1];
        		n--;
        		i++;
			}
		}
	}
}


void AfficherNombreTotalLivres() {
    int counter = 0;
    for (i = 0; i < n; i++) {
        counter += quantite[i];
    }
    printf("The total number of books in stock is: %d\n", counter);
}


