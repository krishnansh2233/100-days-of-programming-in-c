#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, k;

	/* Read n, then n integers, then the window size k. */
	if (scanf("%d", &n) != 1 || n <= 0)
		return 0;

	int *arr = malloc((size_t)n * sizeof(*arr));
	int *negativeIndices = malloc((size_t)n * sizeof(*negativeIndices));
	if (arr == NULL || negativeIndices == NULL) {
		free(arr);
		free(negativeIndices);
		return 1;
	}

	for (int i = 0; i < n; ++i) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			free(negativeIndices);
			return 0;
		}
	}

	if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
		free(arr);
		free(negativeIndices);
		return 0;
	}

	int head = 0;
	int tail = 0;
	for (int i = 0; i < n; ++i) {
		while (head < tail && negativeIndices[head] <= i - k)
			++head;

		if (arr[i] < 0)
			negativeIndices[tail++] = i;

		if (i >= k - 1) {
			if (head < tail)
				printf("%d", arr[negativeIndices[head]]);
			else
				printf("0");

			if (i < n - 1)
				putchar(' ');
		}
	}

	putchar('\n');
	free(arr);
	free(negativeIndices);
	return 0;
}
