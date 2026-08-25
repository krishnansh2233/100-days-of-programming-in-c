#include <stdio.h>
int main(void)
{
	int first, second;
	scanf("%d %d", &first, &second);
	first = first + second;
	second = first - second;
	first = first - second;
	printf("After swap: %d %d\n", first, second);
	return 0;
}
