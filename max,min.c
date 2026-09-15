#include <stdio.h>
int main(void) {
	int n;
	scanf("%d", &n);
	int value;
	scanf("%d", &value);
	int max = value;
	int min = value;
	for (int i = 1; i < n; i++) {
		scanf("%d", &value);
		if (value > max) {
			max = value;
		}
		if (value < min) {
			min = value;
		}
	}
	printf("Max=%d, Min=%d\n", max, min);
	return 0;
}
