 #include <stdio.h>
int main(void)
{
	int number, sum = 0;

	scanf("%d", &number);

	if (number > 1) {
		for (int divisor = 1; divisor <= number / 2; divisor++) {
			if (number % divisor == 0) {
				sum += divisor;
			}
		}
	}

	if (number > 1 && sum == number) {
		printf("Perfect number\n");
	} else {
		printf("Not perfect number\n");
	}
	return 0;
}
