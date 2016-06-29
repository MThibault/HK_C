#include <stdio.h>

int main(void) {
	/* Initialization */
	char	chaine[50];

	/* Affectation */
	chaine[0]	= 'h';
	chaine[1]	= 'e';
	chaine[2]	= 'l';
	chaine[3]	= 'l';
	chaine[4]	= 'o';
	chaine[5]	= '\0';

	/* Implementation */
	if (chaine[0] == 'h') {
		chaine[0]	= 'H';
	}

	puts(chaine);

	return 0;
}
