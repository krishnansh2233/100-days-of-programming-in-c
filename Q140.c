#include <stdio.h>
#include <string.h>

enum Gender {
	MALE,
	FEMALE
};

struct Person {
	enum Gender gender;
};

int main(void) {
	char input[16];
	struct Person person;

	if (scanf("Gender=%15s", input) != 1) {
		return 1;
	}

	if (strcmp(input, "MALE") == 0) {
		person.gender = MALE;
	} else if (strcmp(input, "FEMALE") == 0) {
		person.gender = FEMALE;
	} else {
		return 1;
	}

	printf("%s\n", person.gender == MALE ? "Male" : "Female");
	return 0;
}
