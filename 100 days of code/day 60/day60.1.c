#include <stdio.h>
int main() {
    int a[100], n, k, i, j, maximum;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for (i = 0; i <= n-k; i++) {
        maximum = a[i];
        for (j = i+1; j < i+k; j++) if (a[j] > maximum) maximum = a[j];
        printf("%d ", maximum);
    }
    return 0;
}
