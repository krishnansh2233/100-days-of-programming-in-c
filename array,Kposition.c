#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int array[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &array[i]);

	int k;
	scanf("%d", &k);
	if (n > 0) {
		k %= n;
		for (int step = 0; step < k; step++) {
			int last = array[n - 1];
			for (int i = n - 1; i > 0; i--)
				array[i] = array[i - 1];
			array[0] = last;
		}
	}

	for (int i = 0; i < n; i++) {
		if (i > 0)
			printf(" ");
		printf("%d", array[i]);
	}
	printf("\n");

	return 0;
}
