#include <stdio.h>
int main() {
    long long n, result = 0, place = 1, digit;
    scanf("%lld", &n);
    while (n != 0) {
        digit = n % 10;
        result = result + (1 - digit) * place;
        place = place * 10;
        n = n / 10;
    }
    printf("%lld\n", result);
    return 0;
}
