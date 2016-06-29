#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/* Initialization */
	int	choix;

	/* Implementation */
	/* Affichage du menu */
	printf("\n\tMenu\n"
		"1-Ouvrir\n"
		"2-Sauvegarder\n"
		"3-Quitter\n"
		"Entrez votre choix: ");
	if(scanf("%d", &choix) == EOF) exit(EXIT_FAILURE);

	switch(choix) {
		case 1:
		puts("1 -> Ouverture");
		break;

		case 2:
		puts("2 -> Sauvegarde");
		break;

		case 3:
		puts("3 -> Au revoir");
		break;

		default:
		return -1;
		break;
	}

	return 0;
}
