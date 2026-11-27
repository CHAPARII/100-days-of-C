#include <stdio.h>
int main() {
    int a[100], n, k, i, j, sum, maximum;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    maximum = -2147483648;
    for (i = 0; i <= n-k; i++) {
        sum = 0; for (j = i; j < i+k; j++) sum += a[j];
        if (sum > maximum) maximum = sum;
    }
    printf("%d\n", maximum);
    return 0;
}
