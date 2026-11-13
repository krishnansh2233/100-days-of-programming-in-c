#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *file = fopen("data.txt", "a");
	char text[1024];

	if (file == NULL) {
		perror("Could not open data.txt");
		return 1;
	}

	if (fgets(text, sizeof(text), stdin) == NULL) {
		fclose(file);
		return 1;
	}

	/* Start the appended text on a new line. */
	if (fputs("\n", file) == EOF || fputs(text, file) == EOF) {
		perror("Could not append to data.txt");
		fclose(file);
		return 1;
	}

	if (text[strlen(text) - 1] != '\n' && fputc('\n', file) == EOF) {
		perror("Could not append to data.txt");
		fclose(file);
		return 1;
	}

	if (fclose(file) != 0) {
		perror("Could not close data.txt");
		return 1;
	}

	printf("File updated successfully with appended text.\n");
	return 0;
}
