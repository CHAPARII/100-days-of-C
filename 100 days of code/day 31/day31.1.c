#include <stdio.h>
int main() {
    int a[100], n, i, key, found = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    for (i = 0; i < n; i++) if (a[i] == key) { found = i; break; }
    printf("%d\n", found);
    return 0;
}
