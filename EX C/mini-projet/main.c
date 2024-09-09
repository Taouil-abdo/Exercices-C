#include <stdio.h>
#include <stdlib.h>
#include "function.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i;

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
