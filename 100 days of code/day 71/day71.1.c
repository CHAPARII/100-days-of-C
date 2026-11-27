#include <stdio.h>
int main() {
    FILE *file; char name[100]; int age;
    fgets(name, sizeof(name), stdin);
    scanf("%d", &age);
    file = fopen("info.txt", "w");
    if (file == NULL) return 1;
    fprintf(file, "Name: %sAge: %d\n", name, age);
    fclose(file);
    printf("Data saved successfully\n");
    return 0;
}
