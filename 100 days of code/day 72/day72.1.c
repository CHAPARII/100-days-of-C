#include <stdio.h>
int main() {
    FILE *file; char line[200];
    file = fopen("info.txt", "r");
    if (file == NULL) { printf("File not found\n"); return 1; }
    while (fgets(line, sizeof(line), file) != NULL) printf("%s", line);
    fclose(file);
    return 0;
}
