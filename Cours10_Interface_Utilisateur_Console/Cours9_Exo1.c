#include <stdio.h>
#include <string.h>

int compteur(char *chaine);

int main(void) {
	int i; /* déclaration index, nombre de demandes utilisateur */
	char *p; /* déclaration retour de fgets */
	char maChaine[100]; /* déclaration variable contenant valeur console par utilisateur */
	
	for (i=0; i<5; i++) {
		printf("\nEntrer la chaine pour compter son nombre de voyelles: ");
		
		/* à compléter, utilisation de fgets */
		fgets(maChaine, 100, stdin);
		
		if (p != NULL) {			
			p = strchr(maChaine, '\n'); /* pas de préoccuper */
			if (p != NULL) { /* pas se préoccuper */
				*p = '\0'; /* pas se préoccuper */
			}
				
				printf("\nma chaine %s contient %d voyelles\n", maChaine, compteur(maChaine)); /* affichage du résultat */
		}
	}
	return 0;
}

int compteur(char *chaine) {
	/* fonction permettant de compter les voyelles */
	
	int i; /* déclaration index pour lire caractère par caractère chaine */
	int j; /* déclaration index pour lire caractère par caractère voyelles */
	int resultat = 0; /* valeur contenant le nombre de voyelles dans valeur de la variable chaine */
	char voyelles[] = {'a', 'e', 'i', 'o', 'u', 'y', '\0'}; /* déclaration de toutes les voyelles dans tableau voyelles */
	
	for (i=0; chaine[i]!='\0'; i++) { /* pour chaque caractère de la variable chaine */
		for (j=0; voyelles[j]!='\0'; j++) { /* pour chaque caractère du tableau voyelles */
			if(chaine[i] == voyelles[j]) {
				resultat++;
				break;
			}
		}
	}		
	return resultat;
}
