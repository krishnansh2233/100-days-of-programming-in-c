 #include <stdio.h>
int main(void)
{
	int number;
	int reversed = 0;
	scanf("%d", &number);
	while (number != 0) {
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}
	printf("%d\n", reversed);
	return 0;
}
