#include <stdio.h>

int main(void)
{
	FILE *file = fopen("numbers.txt", "r");
	long long value;
	long long sum = 0;
	long long count = 0;

	if (file == NULL) {
		perror("Unable to open numbers.txt");
		return 1;
	}

	while (fscanf(file, "%lld", &value) == 1) {
		sum += value;
		count++;
	}

	fclose(file);

	if (count == 0) {
		printf("Sum = 0\nAverage = 0.00\n");
	} else {
		printf("Sum = %lld\nAverage = %.2f\n", sum, (double)sum / count);
	}

	return 0;
}
