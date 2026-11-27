#include <stdio.h>
struct Student { char name[50]; int roll; float marks; };
int main() {
    FILE *file; struct Student s; int n, i;
    scanf("%d", &n); file = fopen("students.txt", "w");
    for (i = 0; i < n; i++) { scanf("%49s %d %f", s.name, &s.roll, &s.marks); fprintf(file, "%s %d %.2f\n", s.name, s.roll, s.marks); }
    fclose(file); file = fopen("students.txt", "r");
    while (fscanf(file, "%49s %d %f", s.name, &s.roll, &s.marks) == 3) printf("%s %d %.2f\n", s.name, s.roll, s.marks);
    fclose(file); return 0;
}
