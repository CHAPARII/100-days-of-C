#include <stdio.h>
int main() {
    int a[10][10], rows, cols, i, j, sum;
    scanf("%d %d", &rows, &cols);
    for (i = 0; i < rows; i++) for (j = 0; j < cols; j++) scanf("%d", &a[i][j]);
    for (i = 0; i < rows; i++) {
        sum = 0;
        for (j = 0; j < cols; j++) sum += a[i][j];
        printf("%d ", sum);
    }
    return 0;
}
