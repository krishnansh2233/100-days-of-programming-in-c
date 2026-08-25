#include <stdio.h>
int main(void)
{
	int first, second, temporary;
	scanf("%d %d", &first, &second);
	temporary = first;
	first = second;
	second = temporary;
	printf("After swap: %d %d\n", first, second);
	return 0;
}
