#include <stdio.h>

int main(void)
{
	int n;

	if (scanf("%d", &n) != 1 || n < 0)
		return 1;

	int missing = n;
	for (int i = 0, value; i < n; ++i) {
		if (scanf("%d", &value) != 1)
			return 1;
		missing ^= i ^ value;
	}

	printf("%d\n", missing);
	return 0;
}
