 #include <stdio.h>

int main(void)
{
	long long number;
	int product = 1;

	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	while (number > 0) {
		int digit = number % 10;

		if (digit % 2 != 0)
			product *= digit;

		number /= 10;
	}

	printf("%d\n", product);
	return 0;
}
