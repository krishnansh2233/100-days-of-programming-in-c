#include <stdio.h>

int main(void) {
	FILE *file = fopen("info.txt", "r");
	char line[256];

	if (file == NULL) {
		perror("Could not open info.txt");
		return 1;
	}

	while (fgets(line, sizeof(line), file) != NULL) {
		fputs(line, stdout);
	}

	fclose(file);
	return 0;
}
