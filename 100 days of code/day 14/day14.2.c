#include <stdio.h>
int main() {
    int n, i;
    long long product = 1;
    scanf("%d", &n);
    for (i = 2; i <= n; i = i + 2) product = product * i;
    printf("%lld\n", product);
    return 0;
}
