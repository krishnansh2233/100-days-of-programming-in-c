#include <stdio.h>
int main(void)
{
	int n;
	long long sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int element;
		scanf("%d", &element);
		sum += element;
	}
	printf("%lld\n", sum);
	return 0;
}
