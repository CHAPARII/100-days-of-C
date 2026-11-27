#include <stdio.h>
int main() {
    int a[100], n, key, low, high, mid, answer = -1, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    low = 0; high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) { answer = mid; break; }
        else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    printf("%d\n", answer);
    return 0;
}
