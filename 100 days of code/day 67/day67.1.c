#include <stdio.h>
int main() {
    int a[100], b[100], m, n, i, j = 0, k = 0;
    scanf("%d", &m); for (i = 0; i < m; i++) scanf("%d", &a[i]);
    scanf("%d", &n); for (i = 0; i < n; i++) scanf("%d", &b[i]);
    while (j < m && k < n) { if (a[j] < b[k]) printf("%d ", a[j++]); else printf("%d ", b[k++]); }
    while (j < m) printf("%d ", a[j++]);
    while (k < n) printf("%d ", b[k++]);
    return 0;
}
