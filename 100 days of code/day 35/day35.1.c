#include <stdio.h>
int main() {
    int a[100], n, i, largest, second = -2147483648;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    largest = a[0];
    for (i = 1; i < n; i++) if (a[i] > largest) largest = a[i];
    for (i = 0; i < n; i++) if (a[i] != largest && a[i] > second) second = a[i];
    printf("%d\n", second);
    return 0;
}
