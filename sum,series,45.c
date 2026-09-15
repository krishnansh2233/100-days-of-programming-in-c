	#include <stdio.h>
	int main(void)
	{
		int n;
		double sum = 0.0;
		scanf("%d", &n);

		for (int i = 1; i <= n; i++) {
			sum += (2.0 * i) / (4 * i - 1);
		}
		printf("Approximate sum: %.2f\n", sum);
		return 0;
	}
