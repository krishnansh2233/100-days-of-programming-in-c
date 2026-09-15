#include <stdio.h>
int main(void)
{
	int number, original, reversed = 0;
	scanf("%d", &number);
	original = number;
	if (number >= 0) {
		while (number != 0) {
			reversed = reversed * 10 + number % 10;
			number /= 10;
		}
	}
	if (original >= 0 && original == reversed)
		printf("Palindrome\n");
	else
		printf("Not palindrome\n");
	return 0;
}
