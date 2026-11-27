#include <stdio.h>
int main() {
    FILE *input, *output; char ch;
    input = fopen("input.txt", "r"); output = fopen("output.txt", "w");
    if (input == NULL || output == NULL) return 1;
    while ((ch = fgetc(input)) != EOF) { if (ch >= 'a' && ch <= 'z') ch -= 32; fputc(ch, output); }
    fclose(input); fclose(output);
    printf("Converted text saved to output.txt\n");
    return 0;
}
