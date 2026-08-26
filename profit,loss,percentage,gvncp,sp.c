 #include <stdio.h>
int main(void)
{
	double cost_price, selling_price, percentage;
	scanf("%lf %lf", &cost_price, &selling_price);
	if (selling_price > cost_price) {
		percentage = (selling_price - cost_price) * 100 / cost_price;
		printf("Profit %g%%\n", percentage);
	} else if (selling_price < cost_price) {
		percentage = (cost_price - selling_price) * 100 / cost_price;
		printf("Loss %g%%\n", percentage);
	} else 
		printf("No Profit No Loss\n");
	}
	return 0;
}
