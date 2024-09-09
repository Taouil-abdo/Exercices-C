#ifndef header_h
#define header_h    
	
	
	
	
extern	char titre [50][100];
extern	char auteur [50][100];
extern	float prix [50];
extern	int quantite [50];
extern	int i ,n;
extern	int counter = 0;
	
	
void Ajouter();
void Afficher();
void RechercherlivrePartitre();
void MettreJourQuantite();
void SupprimerLivre();
void AfficherNombreTotalLivres();
	
	#endif
