#include <stdio.h>
int main() {
    char s[200]; int i = 0, first = 1;
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z' && !first) s[i] += 32;
        if (s[i] >= 'a' && s[i] <= 'z' && first) { s[i] -= 32; first = 0; }
        if (s[i] == ' ') first = 1;
        i++;
    }
    printf("%s", s);
    return 0;
}
