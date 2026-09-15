#include <stdio.h>
int main(void)
{
	int n;
	long long product = 1;
	scanf("%d", &n);
	for (int i = 2; i <= n; i += 2) {
		product *= i;
	}
	printf("%lld\n", product);
	return 0;
}
