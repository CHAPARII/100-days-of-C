#include <stdio.h>
int main() {
    int a[100], n, i, j, answer;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) {
        answer = -1;
        for (j = i+1; j < n; j++) if (a[j] > a[i]) { answer = a[j]; break; }
        printf("%d", answer);
        if (i != n-1) printf(",");
    }
    return 0;
}
