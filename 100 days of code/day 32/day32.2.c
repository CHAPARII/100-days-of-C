#include <stdio.h>
int main() {
    long long n;
    int count[10] = {0}, digit, i, max = 0, answer = 0;
    scanf("%lld", &n);
    if (n == 0) count[0] = 1;
    if (n < 0) n = -n;
    while (n > 0) { digit = n % 10; count[digit]++; n = n / 10; }
    for (i = 0; i < 10; i++) if (count[i] > max) { max = count[i]; answer = i; }
    printf("%d\n", answer);
    return 0;
}
