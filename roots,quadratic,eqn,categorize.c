#include <math.h>
#include <stdio.h>
int main(void)
{
	double a, b, c;
	double discriminant;
	if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
		return 1;
	if (a == 0) {
		printf("Not a quadratic equation\n");
		return 0;
	}
	discriminant = b * b - 4 * a * c;
	if (discriminant > 0) {
		double root1 = (-b + sqrt(discriminant)) / (2 * a);
		double root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("Roots are real and different: %g, %g\n", root1, root2);
	} else if (discriminant == 0) {
		double root = -b / (2 * a);
		printf("Roots are real and same: %g\n", root);
	} else {
		printf("Roots are complex\n");
	}
	return 0;
}
