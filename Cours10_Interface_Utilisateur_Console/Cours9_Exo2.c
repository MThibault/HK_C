#include <stdio.h>

float moyenne(float *moyennes, int taille);

int main(void) {
	int i; /* index nombre de demandes pour chaque matière */
	int retour; /* déclaration variable valeur de retour de scanf */
	
	float moy; /* déclaration variable contenant la moyenne de chaque matière */
	float mesMoyennes[4]; /* tableau contenant toutes les moyennes */
	
	const char matieres[][50] = {
		"Français",
		"Mathématiques",
		"Physiques",
		"Anglais"
	}; /* tableau des matières */
		
	for (i=0; i<4; i++) {
		printf("Entrer la moyenne pour la matière %s: ", matieres[i]);
			
		/* à compléter - utilisation de scanf, attention au type de formatage */
		retour	= scanf("%f", &moy);
			
		if (retour == 1) { /* si fonction scanf se passe bien */
			/* à compléter - affecter valeurs dans tableau mesMoyennes */
			mesMoyennes[i]	= moy;
		}
	}
				
	for (i=0; i<4; i++) {
		printf("Moyenne de %s: %.1f\n", matieres[i], mesMoyennes[i]); /* affichage de chaque moyenne */
	}
	
	printf("\nMa moyenne est de: %.2f\n", moyenne(mesMoyennes, 4)); /* affichage moyenne générale */
	
	return 0;
}

float moyenne(float *moyennes, int taille) {
	float somme = 0; /* déclaration variable contenant valeur somme du tableau moyennes */
	int i; /* index gérant taille tableau moyennes */
	
	for (i=0; i<taille; i++) {
		/* à compléter, calcul de somme du tableau moyennes */
		somme	+= moyennes[i];
	}
	
	return somme/taille; /* retourne la moyenne */
}
