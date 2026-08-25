 #include <stdio.h>
int main(void)
{
	double first, second;
	printf("Enter two numbers: ");
	scanf("%lf %lf", &first, &second);
	printf("Sum: %.2f\n", first + second);
	printf("Difference: %.2f\n", first - second);
	printf("Product: %.2f\n", first * second);
	if (second != 0)
		printf("Quotient: %.2f\n", first / second);
	else
		printf("Quotient: undefined (division by zero)\n");
	return 0;
}
