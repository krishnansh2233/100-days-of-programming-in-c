#include <stdio.h>
#include <string.h>

enum UserRole {
	ADMIN,
	USER,
	GUEST
};

int main(void) {
	char input[16];
	enum UserRole role;

	if (scanf("%15s", input) != 1) {
		return 0;
	}

	if (strcmp(input, "ADMIN") == 0) {
		role = ADMIN;
	} else if (strcmp(input, "USER") == 0) {
		role = USER;
	} else if (strcmp(input, "GUEST") == 0) {
		role = GUEST;
	} else {
		return 0;
	}

	switch (role) {
		case ADMIN:
			printf("Welcome Admin!\n");
			break;
		case USER:
			printf("Welcome User!\n");
			break;
		case GUEST:
			printf("Welcome Guest!\n");
			break;
	}

	return 0;
}
