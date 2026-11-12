#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	int *arr = malloc((size_t)n * sizeof(*arr));
	int *deque = malloc((size_t)n * sizeof(*deque));
	if (arr == NULL || deque == NULL) {
		free(arr);
		free(deque);
		return 1;
	}

	for (int i = 0; i < n; i++) {
		if (scanf("%d", &arr[i]) != 1) {
			free(arr);
			free(deque);
			return 0;
		}
	}

	int k;
	if (scanf("%d", &k) != 1 || k < 1 || k > n) {
		free(arr);
		free(deque);
		return 0;
	}

	int front = 0;
	int back = 0;
	for (int i = 0; i < n; i++) {
		while (front < back && deque[front] <= i - k) {
			front++;
		}
		while (front < back && arr[deque[back - 1]] <= arr[i]) {
			back--;
		}
		deque[back++] = i;

		if (i >= k - 1) {
			if (i > k - 1) {
				printf(" ");
			}
			printf("%d", arr[deque[front]]);
		}
	}
	printf("\n");

	free(arr);
	free(deque);
	return 0;
}
