 #include <stdio.h>
int main(void)
{
	int n;
	int sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += 2 * i - 1;
	}
	printf("%d", sum);
	return 0;
}
