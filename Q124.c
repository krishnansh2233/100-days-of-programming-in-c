#include <stdio.h>
#include <string.h>

int main(void)
{
	char source_name[256];
	char destination_name[256];
	FILE *source;
	FILE *destination;
	int ch;

	printf("Source File: ");
	if (fgets(source_name, sizeof(source_name), stdin) == NULL)
		return 1;
	source_name[strcspn(source_name, "\r\n")] = '\0';

	printf("Destination File: ");
	if (fgets(destination_name, sizeof(destination_name), stdin) == NULL)
		return 1;
	destination_name[strcspn(destination_name, "\r\n")] = '\0';

	source = fopen(source_name, "r");
	if (source == NULL) {
		perror("Could not open source file");
		return 1;
	}

	destination = fopen(destination_name, "w");
	if (destination == NULL) {
		perror("Could not open destination file");
		fclose(source);
		return 1;
	}

	while ((ch = fgetc(source)) != EOF) {
		if (fputc(ch, destination) == EOF) {
			perror("Error copying file");
			fclose(source);
			fclose(destination);
			return 1;
		}
	}

	if (ferror(source) || fclose(source) == EOF || fclose(destination) == EOF) {
		perror("Error copying file");
		return 1;
	}

	printf("File copied successfully to %s\n", destination_name);
	return 0;
}
