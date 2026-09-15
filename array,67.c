#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int array[n + 1];
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	int position, value;
	scanf("%d %d", &position, &value);
	/* Positions are 1-based. */
	if (position < 1 || position > n + 1) {
		return 0;
	}
	int index = position - 1;
	for (int i = n; i > index; i--) {
		array[i] = array[i - 1];
	}
	array[index] = value;
	for (int i = 0; i <= n; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", array[i]);
	}
	printf("\n");

	return 0;
}
