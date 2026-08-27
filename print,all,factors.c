 #include <stdio.h>
int main(void)
{
	int number;
	scanf("%d", &number);
	for (int factor = 1; factor <= number; factor++)
	{
		if (number % factor == 0)
		{
			printf("%d ", factor);
		}
    }
	return 0;
}
