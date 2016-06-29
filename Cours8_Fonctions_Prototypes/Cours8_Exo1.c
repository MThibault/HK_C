#include <stdio.h>

/* Prototypes */
void generate(const char chaine[], char *str);

int main(void) {
	const char ch[] = "bonjour";
	char chaineCache[8];
	
	generate(ch, chaineCache);
	
	puts(chaineCache); /* Affichage de "*******" sur la console */
	
	return 0;
}

void generate(const char chaine[], char *str) {
	/* Initialization */
	int	i;

	/* Affectation */
	i	= 0;

	/* Implementation */
	while(chaine[i] != '\0') {
		str[i]	= '*';
		i++;
	}
	str[i]	= '\0';
}
