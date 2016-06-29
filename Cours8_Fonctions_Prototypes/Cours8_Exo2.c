#include <stdio.h>

/* Prototypes */
int foisDeux(int a);

int main(void) {
	int value = 18;
	int result; /* variable enregistrant le résultat de la fonction foisDeux */
	
	/* Utilisation de la fonction foisDeux à compléter */
	result	= foisDeux(value);
	
	printf("Le double de %d est %d\n", value, result); /* Le double de 18 est 36 */
	
	return 0;
}

int foisDeux(int a) {
	return a * 2;
}
