#include <stdio.h>
#include <string.h>

int main(void) {
	/* Initialisation and Affectation */
	char	tab[]		= "Livres";
	int	tab_size;

	/* Implementation */
	puts(tab);
	tab_size		= strlen(tab);
	tab[tab_size - 1]	= '\0';
	puts(tab);

	return 0;
}
