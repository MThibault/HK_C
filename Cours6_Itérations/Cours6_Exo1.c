#include <stdio.h>

int main(void) {
	/* Initialization */
	int	multiplicateur;
	int	i;

	/* Affectation */
	multiplicateur	= 7;

	/* Implementation */
	for(i = 0; i <= 10; i++) {
		printf("%d * %d = %d\n", i, multiplicateur, i * multiplicateur);
	}

	puts("\n");

	i	= 0;
	while(i <= 10) {
		printf("%d * %d = %d\n", i, multiplicateur, i * multiplicateur);
		i++;
	}

	return 0;
}
