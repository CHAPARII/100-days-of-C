#include <stdio.h>
int main() {
    FILE *file; char filename[100], ch, previous = ' '; int characters = 0, words = 0, lines = 0;
    scanf("%99s", filename);
    file = fopen(filename, "r");
    if (file == NULL) { printf("File not found\n"); return 1; }
    while ((ch = fgetc(file)) != EOF) {
        characters++;
        if (ch == '\n') lines++;
        if (ch != ' ' && ch != '\n' && (previous == ' ' || previous == '\n')) words++;
        previous = ch;
    }
    fclose(file);
    printf("Characters = %d\nWords = %d\nLines = %d\n", characters, words, lines);
    return 0;
}
