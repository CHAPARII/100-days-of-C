#include <stdio.h>
int main() {
    char s[200], target; int i = 0, count = 0;
    fgets(s, sizeof(s), stdin);
    scanf(" %c", &target);
    while (s[i] != '\0') { if (s[i] == target) count++; i++; }
    printf("%d\n", count);
    return 0;
}
