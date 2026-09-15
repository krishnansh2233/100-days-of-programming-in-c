 #include <stdio.h>
int main(void)
{
	for (int stars = 1; stars <= 9; stars += 2) {
		for (int i = 0; i < stars; i++) {
			putchar('*');
		}
		putchar('\n');
	}
	for (int stars = 7; stars >= 1; stars -= 2) {
		for (int i = 0; i < stars; i++) {
			putchar('*');
		}
		putchar('\n');
	}
	return 0;
}
