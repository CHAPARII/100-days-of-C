#include <stdio.h>
#include <math.h>
int main() {
    int n, original, digit, count = 0;
    int sum = 0;
    scanf("%d", &n);
    original = n;
    do { count++; n = n / 10; } while (n != 0);
    n = original;
    while (n != 0) {
        digit = n % 10;
        sum = sum + (int)pow(digit, count);
        n = n / 10;
    }
    if (sum == original) printf("Armstrong Number\n");
    else printf("Not an Armstrong Number\n");
    return 0;
}
