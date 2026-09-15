 #include <stdio.h>
int main(void)
{
	long long number, first, last, power = 1, middle, result;

	scanf("%lld", &number);
	if (number < 0) {
		printf("-");
		number = -number;
	}
	if (number < 10) {
		printf("%lld\n", number);
		return 0;
	}
	last = number % 10;
	first = number;
	while (first >= 10) {
		first /= 10;
		power *= 10;
	}

	middle = (number % power) / 10;
	result = last * power + middle * 10 + first;

	printf("%lld\n", result);
	return 0;
}
