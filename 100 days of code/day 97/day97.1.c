#include <stdio.h>
struct Employee { char name[50]; int id; float salary; };
int main() {
    struct Employee e, readEmployee; FILE *file;
    scanf("%49s %d %f", e.name, &e.id, &e.salary);
    file = fopen("employee.dat", "wb");
    if (file == NULL) return 1;
    fwrite(&e, sizeof(struct Employee), 1, file); fclose(file);
    file = fopen("employee.dat", "rb");
    fread(&readEmployee, sizeof(struct Employee), 1, file); fclose(file);
    printf("%s %d %.2f\n", readEmployee.name, readEmployee.id, readEmployee.salary);
    return 0;
}
