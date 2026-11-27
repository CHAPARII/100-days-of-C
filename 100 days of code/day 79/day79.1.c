#include <stdio.h>
int main() {
    FILE *file; int number, sum = 0, count = 0; float average;
    file = fopen("numbers.txt", "r");
    if (file == NULL) return 1;
    while (fscanf(file, "%d", &number) == 1) { sum += number; count++; }
    fclose(file); average = (float)sum / count;
    printf("Sum = %d\nAverage = %.2f\n", sum, average);
    return 0;
}
