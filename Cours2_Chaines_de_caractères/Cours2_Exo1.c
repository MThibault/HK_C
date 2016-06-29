#include <stdio.h>

int main(void) {
	/* Initialization and Affectation */
	char 	tab[]	= "Mécontant";

	/* Implementation */
	puts(tab);
	tab[7]	= 'e';
	puts(tab);

	return 0;
}
