 #include <stdio.h>

int main(void)
{
	int number, original, digit, sum = 0;

	scanf("%d", &number);
	original = number;

	do {
		digit = number % 10;
		int factorial = 1;

		for (int i = 2; i <= digit; i++) {
			factorial *= i;
		}

		sum += factorial;
		number /= 10;
	} while (number != 0);

	if (sum == original) {
		printf("Strong number");
	} else {
		printf("Not strong number");
	}

	return 0;
}
