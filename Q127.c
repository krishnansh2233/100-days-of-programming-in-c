#include <ctype.h>
#include <stdio.h>

int main(void)
{
	FILE *input = fopen("input.txt", "r");
	if (input == NULL) {
		perror("input.txt");
		return 1;
	}

	FILE *output = fopen("output.txt", "w");
	if (output == NULL) {
		perror("output.txt");
		fclose(input);
		return 1;
	}

	int ch;
	while ((ch = fgetc(input)) != EOF) {
		if (fputc(toupper((unsigned char)ch), output) == EOF) {
			perror("output.txt");
			fclose(input);
			fclose(output);
			return 1;
		}
	}

	if (ferror(input)) {
		perror("input.txt");
		fclose(input);
		fclose(output);
		return 1;
	}

	fclose(input);
	if (fclose(output) == EOF) {
		perror("output.txt");
		return 1;
	}

	return 0;
}
