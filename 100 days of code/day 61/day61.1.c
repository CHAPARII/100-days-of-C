#include <stdio.h>
int main() {
    int a[100], n, k, i, j, answer;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    for (i = 0; i <= n-k; i++) {
        answer = 0;
        for (j = i; j < i+k; j++) if (a[j] < 0) { answer = a[j]; break; }
        printf("%d ", answer);
    }
    return 0;
}
