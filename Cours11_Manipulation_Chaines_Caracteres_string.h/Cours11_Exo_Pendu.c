#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Prototypes */
void revealLetter(const char *word, char *secret, const char *letter);
void getLetter(char *letter);
void getWord (char *word);
void initializeSecret(char *ch, const int size);
void clearConsole(void);
void rules(void);

int main(void) {
	/* Initialization */
	char	word[50];
	char	secret[50];
	char	letter[3];
	int	success	= 0;

	/* Implementation */
	rules(); /* Affichage des règles de fonctionnement */
	getWord(word); /* Saisie du mot à trouver */
	initializeSecret(secret, strlen(word)); /* Initialisation de la chaine secrète */
	clearConsole(); /* Nettoyage de la console */
	printf("DEBUG : %s\n", word);

	while(success == 0) {
		puts(secret);
		getLetter(letter);
		revealLetter(word, secret, letter);

		if(strcmp(secret, word) == 0) {
			success = 1;
			printf("Félicitations, vous avez trouvez le mot : %s\n", secret);
		}
	}
	return 0;
}

void revealLetter(const char *word, char *secret, const char *letter) {
	int	i	= 0;

	/*puts(secret);
	puts(letter);*/
	for(i = 0; i < strlen(word); i++) {
		if(word[i] == *letter) {
			secret[i]	= word[i];
		}
	}
}

void getLetter(char *letter) {
	fgets(letter, 3, stdin);
	letter[1]	= '\0';
}

void getWord (char *word) {
	puts("Entrer le mot à deviner : ");
	fgets(word, 50, stdin);
	word[strlen(word) - 1]	= '\0';
}

void initializeSecret(char *ch, const int size) {
	int	i	= 0;

	for(i = 0; i < size; i++) {
		ch[i]	= '*';
	}
	ch[i + 1]	= '\0';
}

void clearConsole(void) {
	int	i	= 0;

	for(i = 0; i < 100; i++) {
		putchar('\n');
	}
}

void rules(void) {
	puts("\tVoici les règles :\n"
		"Un premier utilisateur rentre le mot à deviner.\n"
		"Le deuxième utilisateur essaye de le deviner.\n\n");
}
