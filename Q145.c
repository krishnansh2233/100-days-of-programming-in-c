#include <stdio.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 100

typedef struct {
	char name[NAME_LENGTH];
	int roll;
	int marks;
} Student;

Student findTopStudent(const Student students[], int count) {
	Student top = students[0];

	for (int i = 1; i < count; ++i) {
		if (students[i].marks > top.marks) {
			top = students[i];
		}
	}

	return top;
}

int main(void) {
	int count;
	Student students[MAX_STUDENTS];

	if (scanf("%d", &count) != 1 || count < 1 || count > MAX_STUDENTS) {
		return 1;
	}

	for (int i = 0; i < count; ++i) {
		if (scanf("%99s %d %d", students[i].name,
				  &students[i].roll, &students[i].marks) != 3) {
			return 1;
		}
	}

	Student top = findTopStudent(students, count);
	printf("Top Student: %s | Roll: %d | Marks: %d\n",
		   top.name, top.roll, top.marks);
	return 0;
}
