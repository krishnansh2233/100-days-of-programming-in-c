#include <stdio.h>

int main(void)
{
	int n;
	double sum = 0.0;

	scanf("%d", &n);

	if (n >= 1) {
		sum = 1.0;
		for (int term = 2; term <= n; ++term) {
			sum += (double)(2 * term - 1) / (2 * term);
		}
	}

	printf("Approximate sum: %.1f\n", sum);
	return 0;
}
