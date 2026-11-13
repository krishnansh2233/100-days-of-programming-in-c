#include <stdio.h>

struct Student {
	char name[100];
	int roll_no;
	int marks;
};

int main(void) {
	struct Student student;

	printf("Name: ");
	scanf(" %99[^\n]", student.name);
	printf("Roll: ");
	scanf("%d", &student.roll_no);
	printf("Marks: ");
	scanf("%d", &student.marks);

	printf("Name: %s | Roll: %d | Marks: %d\n",
		   student.name, student.roll_no, student.marks);

	return 0;
}
