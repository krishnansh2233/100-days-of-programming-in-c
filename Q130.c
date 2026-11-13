#include <stdio.h>

int main(void)
{
	int numberOfStudents;
	char name[100];
	int roll;
	int marks;
	FILE *file;

	if (scanf("%d", &numberOfStudents) != 1 || numberOfStudents < 0) {
		return 1;
	}

	file = fopen("students.txt", "w");
	if (file == NULL) {
		perror("students.txt");
		return 1;
	}

	for (int i = 0; i < numberOfStudents; ++i) {
		if (scanf("%99s %d %d", name, &roll, &marks) != 3) {
			fclose(file);
			return 1;
		}
		fprintf(file, "%s %d %d\n", name, roll, marks);
	}
	fclose(file);

	file = fopen("students.txt", "r");
	if (file == NULL) {
		perror("students.txt");
		return 1;
	}

	while (fscanf(file, "%99s %d %d", name, &roll, &marks) == 3) {
		printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
	}

	fclose(file);
	return 0;
}
