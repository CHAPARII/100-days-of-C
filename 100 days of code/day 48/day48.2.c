#include <stdio.h>
int main() {
    char s[200]; int i = 0, start, end;
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0') {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') { i++; continue; }
        start = i; while (s[i] != ' ' && s[i] != '\n' && s[i] != '\0') i++; end = i - 1;
        while (end >= start) printf("%c", s[end--]);
        if (s[i] == ' ') printf(" ");
    }
    printf("\n");
    return 0;
}
