 #include <stdio.h>
int main(void)
{
	double radius;
	const double pi = 3.14159;
	scanf("%lf", &radius);
	printf("Area=%.2f, Circumference=%.2f", pi * radius * radius,
		   2 * pi * radius);
	return 0;
}
