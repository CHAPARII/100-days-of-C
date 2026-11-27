#include <stdio.h>
int main() {
    int a[10][10], rows, cols, sum, i, j;
    scanf("%d %d", &rows, &cols);
    for (i = 0; i < rows; i++) for (j = 0; j < cols; j++) scanf("%d", &a[i][j]);
    for (sum = 0; sum <= rows + cols - 2; sum++) {
        for (i = 0; i < rows; i++) {
            j = sum - i;
            if (j >= 0 && j < cols) printf("%d ", a[i][j]);
        }
    }
    return 0;
}
