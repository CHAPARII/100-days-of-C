#include <stdio.h>
int main() {
    FILE *file; char filename[100], line[200];
    scanf("%99s", filename);
    file = fopen(filename, "r");
    if (file == NULL) { printf("File does not exist\n"); return 1; }
    while (fgets(line, sizeof(line), file) != NULL) printf("%s", line);
    fclose(file);
    return 0;
}
