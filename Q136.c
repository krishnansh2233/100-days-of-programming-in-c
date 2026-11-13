#include <stdio.h>
#include <string.h>

enum Operation {
	ADD,
	SUBTRACT,
	MULTIPLY
};

int main(void) {
	char choice[16];
	int a, b;
	enum Operation operation;

	if (scanf("%15s %d %d", choice, &a, &b) != 3) {
		return 0;
	}

	if (strcmp(choice, "ADD") == 0) {
		operation = ADD;
	} else if (strcmp(choice, "SUBTRACT") == 0) {
		operation = SUBTRACT;
	} else if (strcmp(choice, "MULTIPLY") == 0) {
		operation = MULTIPLY;
	} else {
		return 0;
	}

	switch (operation) {
		case ADD:
			printf("%d\n", a + b);
			break;
		case SUBTRACT:
			printf("%d\n", a - b);
			break;
		case MULTIPLY:
			printf("%d\n", a * b);
			break;
	}

	return 0;
}
