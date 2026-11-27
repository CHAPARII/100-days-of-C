#include <stdio.h>
int main() {
    char s[200]; int count = 0;
    fgets(s, sizeof(s), stdin);
    while (s[count] != '\0' && s[count] != '\n') count++;
    printf("%d\n", count);
    return 0;
}
