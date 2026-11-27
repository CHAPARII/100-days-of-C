#include <stdio.h>
struct Student { char name[50]; int roll; float marks; };
int main() {
    struct Student s[5]; int i, top = 0;
    for (i = 0; i < 5; i++) scanf("%49s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    for (i = 1; i < 5; i++) if (s[i].marks > s[top].marks) top = i;
    printf("%s %d %.2f\n", s[top].name, s[top].roll, s[top].marks);
    return 0;
}
