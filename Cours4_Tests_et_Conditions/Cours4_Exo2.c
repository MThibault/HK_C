#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	/* Initialization */
	srand(time(NULL)); /* Générateur de nombre aléatoire */
	int	nombre;
	
	/* Affectation */
	nombre	= rand() % 100; /* Nombre compris entre 0 et 100 exclus */

	/* Implementation */
	if(nombre % 2 == 0) {
		printf("Le nombre %d est %s.\n", nombre, "pair");
	} else {
		printf("Le nombre %d est %s.\n", nombre, "impair");
	}

	return 0;
}
