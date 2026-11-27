#include <stdio.h>
#include <string.h>
int main() {
    char a[100], b[100], temp[201];
    scanf("%99s %99s", a, b);
    if (strlen(a) != strlen(b)) printf("Not Rotation\n");
    else { strcpy(temp, a); strcat(temp, a); if (strstr(temp, b)) printf("Rotation\n"); else printf("Not Rotation\n"); }
    return 0;
}
