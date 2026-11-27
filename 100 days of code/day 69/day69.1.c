#include <stdio.h>
int main() {
    int a[100], seen[1000] = {0}, n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] >= 0 && a[i] < 1000 && seen[a[i]]) { printf("%d\n", a[i]); return 0; }
        if (a[i] >= 0 && a[i] < 1000) seen[a[i]] = 1;
    }
    return 0;
}
