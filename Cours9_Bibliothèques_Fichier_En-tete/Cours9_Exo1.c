#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Cours9_Exo1.h"

int main(void) {
	const char	hello[]	= "Hello World !";
	int		length	= len(hello);

	printf("Longueur : %d lettres", length);

	return 0;
}

size_t len(const char *chaine) {
	/*size_t	n	= 0;*/
	int	i	= 0;

	while(chaine[i] != '\0') {
		i++;
	}
	return i;
}
