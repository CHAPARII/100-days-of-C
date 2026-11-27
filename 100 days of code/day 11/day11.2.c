#include <stdio.h>
int main() {
    float cost, sell, percent;
    scanf("%f %f", &cost, &sell);
    if (sell > cost) {
        percent = (sell - cost) * 100 / cost;
        printf("Profit = %.2f%%\n", percent);
    } else if (cost > sell) {
        percent = (cost - sell) * 100 / cost;
        printf("Loss = %.2f%%\n", percent);
    } else printf("No profit no loss\n");
    return 0;
}
