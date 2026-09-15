 #include <stdio.h>

int main(void)
{
	unsigned int number;
	int binary[32];
	int i = 0;

	scanf("%u", &number);

	if (number == 0) {
		printf("0");
		return 0;
	}

	while (number > 0) {
		binary[i++] = number % 2;
		number /= 2;
	}

	while (i > 0) {
		printf("%d", binary[--i]);
	}

	return 0;
}
