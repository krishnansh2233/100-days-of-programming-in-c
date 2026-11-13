#include <stdio.h>

enum Status {
	SUCCESS = 0,
	FAILURE = 1,
	TIMEOUT = 2
};

int main(void) {
	printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
	return 0;
}
