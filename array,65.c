#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int array[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	int target;
	scanf("%d", &target);

	int left = 0, right = n - 1;
	while (left <= right) {
		int middle = left + (right - left) / 2;

		if (array[middle] == target) {
			printf("Found at index %d\n", middle);
			return 0;
		}

		if (array[middle] < target) {
			left = middle + 1;
		} else {
			right = middle - 1;
		}
	}

	printf("-1\n");
	return 0;
}
