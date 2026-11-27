#include <stdio.h>
int main() {
    FILE *source, *destination; char sourceName[100], destinationName[100], ch;
    scanf("%99s %99s", sourceName, destinationName);
    source = fopen(sourceName, "r");
    if (source == NULL) { printf("Source file not found\n"); return 1; }
    destination = fopen(destinationName, "w");
    while ((ch = fgetc(source)) != EOF) fputc(ch, destination);
    fclose(source); fclose(destination);
    printf("File copied successfully\n");
    return 0;
}
