#include <stdio.h>
int main() {
    int a[101], n, pos, value, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d %d", &pos, &value);
    for (i = n; i >= pos; i--) a[i] = a[i-1];
    a[pos-1] = value;
    for (i = 0; i <= n; i++) printf("%d ", a[i]);
    return 0;
}
