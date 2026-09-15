 #include <stdio.h>

int main(void)
{
	int number;
	int is_prime = 1;

	scanf("%d", &number);

	if (number < 2) {
		is_prime = 0;
	} else {
		for (int divisor = 2; divisor <= number / divisor; divisor++) {
			if (number % divisor == 0) {
				is_prime = 0;
				break;
			}
		}
	}

	printf("%s\n", is_prime ? "Prime" : "Not prime");
	return 0;
}
