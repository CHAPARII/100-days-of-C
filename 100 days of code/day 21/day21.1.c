#include <stdio.h>
int main() {
    int n, first, last, middle, power = 1;
    scanf("%d", &n);
    if (n < 10) { printf("%d\n", n); return 0; }
    last = n % 10;
    while (n / power >= 10) power = power * 10;
    first = n / power;
    middle = (n % power) / 10;
    printf("%d\n", last * power + middle * 10 + first);
    return 0;
}
