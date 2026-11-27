#include <stdio.h>
int main() {
    FILE *file; char filename[100], line[200];
    scanf("%99s", filename); getchar();
    fgets(line, sizeof(line), stdin);
    file = fopen(filename, "a");
    if (file == NULL) return 1;
    fputs(line, file); fclose(file);
    printf("Text appended successfully\n");
    return 0;
}
