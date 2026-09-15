#include <stdio.h>
int main(void)
{
    float cost_price, selling_price, percentage;

    scanf("%f %f", &cost_price, &selling_price);

    if (selling_price > cost_price) {
        percentage = ((selling_price - cost_price) / cost_price) * 100;
        printf("Profit %.0f%%", percentage);
    } else if (selling_price < cost_price) {
        percentage = ((cost_price - selling_price) / cost_price) * 100;
        printf("Loss %.0f%%", percentage);
    } else {
        printf("No Profit No Loss");
    }
    return 0;
}