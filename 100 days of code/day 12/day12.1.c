#include <stdio.h>
int main() {
    int days;
    float fine;
    scanf("%d", &days);
    if (days <= 0) printf("Fine = 0\n");
    else if (days <= 5) printf("Fine = %.2f\n", days * 2.0);
    else if (days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
        printf("Fine = %.2f\n", fine);
    } else if (days <= 30) {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("Fine = %.2f\n", fine);
    } else printf("Membership Cancelled\n");
    return 0;
}
