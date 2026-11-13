#include <stdio.h>

enum Color { RED, YELLOW, GREEN };

int main(void)
{
	const char *names[] = {"RED", "YELLOW", "GREEN"};
	const enum Color values[] = {RED, YELLOW, GREEN};
	const int count = sizeof(values) / sizeof(values[0]);

	for (int i = 0; i < count; ++i) {
		printf("%s=%d\n", names[i], (int)values[i]);
	}

	return 0;
}
