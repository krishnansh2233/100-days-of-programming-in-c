#include <stdio.h>

int main(void)
{
	char name[100];
	int age;
	FILE *file;

	if (scanf("%99s %d", name, &age) != 2) {
		return 1;
	}

	file = fopen("info.txt", "w");
	if (file == NULL) {
		return 1;
	}

	fprintf(file, "Name: %s, Age: %d\n", name, age);
	fclose(file);

	printf("File created successfully! Data written to info.txt\n");
	return 0;
}
