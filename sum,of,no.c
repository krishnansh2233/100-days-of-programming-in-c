 #include <stdio.h>

int main(void)
{
	long long number;
	int sum = 0;

	scanf("%lld", &number);

	if (number < 0)
		number = -number;

	while (number > 0) {
		sum += (int)(number % 10);
		number /= 10;
	}

	printf("%d\n", sum);
	return 0;
}
