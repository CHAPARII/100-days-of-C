#include <stdio.h>
int main() {
    char s[200]; int count[26] = {0}, i = 0, answer = -1;
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0') { if (s[i] >= 'a' && s[i] <= 'z') count[s[i]-'a']++; i++; }
    for (i = 0; s[i] != '\0'; i++) if (s[i] >= 'a' && s[i] <= 'z' && count[s[i]-'a'] > 1) { answer = i; break; }
    if (answer == -1) printf("No repeating character\n"); else printf("%c\n", s[answer]);
    return 0;
}
