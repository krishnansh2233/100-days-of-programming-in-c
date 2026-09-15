#include <stdio.h>
#include <limits.h>

int main(void)
{
	int n;
	scanf("%d", &n);

	int largest = INT_MIN;
	int secondLargest = INT_MIN;
	int hasSecondLargest = 0;

	for (int i = 0; i < n; i++) {
		int value;
		scanf("%d", &value);

		if (value > largest) {
			if (i > 0 || largest != INT_MIN) {
				secondLargest = largest;
				hasSecondLargest = 1;
			}
			largest = value;
		} else if (value < largest &&
				   (!hasSecondLargest || value > secondLargest)) {
			secondLargest = value;
			hasSecondLargest = 1;
		}
	}

	if (hasSecondLargest)
		printf("%d\n", secondLargest);

	return 0;
}
