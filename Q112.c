#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	if (scanf("%d", &n) != 1 || n <= 0) {
		return 0;
	}

	long long value;
	if (scanf("%lld", &value) != 1) {
		return 0;
	}

	long long current_sum = value;
	long long max_sum = value;

	for (int i = 1; i < n; i++) {
		if (scanf("%lld", &value) != 1) {
			return 0;
		}
		if (current_sum < 0) {
			current_sum = value;
		} else {
			current_sum += value;
		}
		if (current_sum > max_sum) {
			max_sum = current_sum;
		}
	}

	printf("%lld\n", max_sum);
	return 0;
}
