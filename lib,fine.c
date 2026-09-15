#include <stdio.h>
int main(void)
{
	int lateDays;
	int fine = 0;
	scanf("%d", &lateDays);
	if (lateDays > 30) {
		printf("Membership Cancelled\n");
		return 0;
    }
	if (lateDays > 20) {
		fine += (lateDays - 20) * 6;
		lateDays = 20;
	}
	if (lateDays > 5) {
		fine += (lateDays - 5) * 4;
		lateDays = 5;
	}
	if (lateDays > 0) {
		fine += lateDays * 2;
	}
	printf("Fine ₹%d\n", fine);
	return 0;
}
