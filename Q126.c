#include <stdio.h>
#include <string.h>

int main(void)
{
	char filename[256];
	FILE *file;
	int ch;

	printf("Filename: ");
	if (fgets(filename, sizeof(filename), stdin) == NULL) {
		return 1;
	}

	filename[strcspn(filename, "\n")] = '\0';
	file = fopen(filename, "r");

	if (file == NULL) {
		printf("Error: File does not exist!\n");
		return 1;
	}

	printf("File opened successfully.\n");
	while ((ch = fgetc(file)) != EOF) {
		putchar(ch);
	}

	fclose(file);
	return 0;
}
