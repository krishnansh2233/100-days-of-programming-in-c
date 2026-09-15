#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int array[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < n; i++) {
		if (i > 0) {
			printf(" ");
		}
		printf("%d", array[i]);
	}
	printf("\n");
	return 0;
}
