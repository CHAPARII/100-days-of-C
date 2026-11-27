#include <stdio.h>
struct Student { char name[50]; int roll; float marks; };
int main() {
    struct Student s, *ptr;
    ptr = &s;
    scanf("%49s %d %f", ptr->name, &ptr->roll, &ptr->marks);
    ptr->marks = ptr->marks + 1;
    printf("Name: %s\nRoll: %d\nMarks after modification: %.2f\n", ptr->name, ptr->roll, ptr->marks);
    return 0;
}
