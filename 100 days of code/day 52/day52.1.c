#include <stdio.h>
int main() {
    int a[100], n, x, low, high, mid, answer = -1, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &x);
    low = 0; high = n-1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] >= x) { answer = mid; high = mid - 1; }
        else low = mid + 1;
    }
    printf("%d\n", answer);
    return 0;
}
