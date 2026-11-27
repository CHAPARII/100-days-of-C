#include <stdio.h>
int main() {
    char s[200]; int length = 0, i, lastStart = 0;
    fgets(s, sizeof(s), stdin);
    while (s[length] != '\0' && s[length] != '\n') length++;
    for (i = length-1; i >= 0; i--) if (s[i] == ' ') { lastStart = i + 1; break; }
    for (i = 0; i < lastStart-1; i++) if (i == 0 || s[i-1] == ' ') printf("%c.", s[i]);
    if (lastStart > 0) printf(" ");
    for (i = lastStart; i < length; i++) printf("%c", s[i]);
    printf("\n");
    return 0;
}
