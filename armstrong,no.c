#include <stdio.h>

long long power(int base, int exponent)
{
	long long result = 1;

	while (exponent-- > 0)
		result *= base;

	return result;
}

int main(void)
{
	long long number, original, remainder, sum = 0;
	int digits = 0;

	scanf("%lld", &number);

	if (number < 0) {
		printf("Not Armstrong");
		return 0;
	}

	original = number;

	if (number == 0) {
		digits = 1;
	} else {
		while (number != 0) {
			digits++;
			number /= 10;
		}
	}

	number = original;
	do {
		remainder = number % 10;
		sum += power((int)remainder, digits);
		number /= 10;
	} while (number != 0);

	if (sum == original)
		printf("Armstrong");
	else
		printf("Not Armstrong");

	return 0;
}
