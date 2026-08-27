#include <stdio.h>
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	while (b != 0) {
		int remainder = a % b;
		a = b;
		b = remainder;
	}
	printf("%d\n", a < 0 ? -a : a);
	return 0;
}
