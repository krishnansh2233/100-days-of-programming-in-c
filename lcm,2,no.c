 #include <stdio.h>

int main(void)
{
	int a, b, x, y, gcd;

	scanf("%d %d", &a, &b);
	x = a;
	y = b;

	while (y != 0) {
		int remainder = x % y;
		x = y;
		y = remainder;
	}

	gcd = x < 0 ? -x : x;
	printf("%d\n", (a / gcd) * b < 0 ? -((a / gcd) * b) : (a / gcd) * b);

	return 0;
}
