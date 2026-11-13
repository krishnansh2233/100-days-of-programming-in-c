#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char filename[256];
	FILE *file;
	int ch;
	int vowels = 0;
	int consonants = 0;

	/* Accept a filename as an argument, or read it from standard input. */
	if (argc > 1) {
		file = fopen(argv[1], "r");
	} else {
		if (scanf("%255s", filename) != 1) {
			return 1;
		}
		file = fopen(filename, "r");
	}

	if (file == NULL) {
		perror("Unable to open file");
		return 1;
	}

	while ((ch = fgetc(file)) != EOF) {
		if (isalpha((unsigned char)ch)) {
			switch (tolower((unsigned char)ch)) {
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					vowels++;
					break;
				default:
					consonants++;
			}
		}
	}

	fclose(file);
	printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
	return 0;
}
