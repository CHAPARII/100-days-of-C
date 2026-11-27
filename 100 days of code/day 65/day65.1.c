#include <stdio.h>
int main() {
    char s[200], t[200]; int count[26] = {0}, i = 0, answer = 1;
    scanf("%199s %199s", s, t);
    while (s[i] != '\0') { count[s[i]-'a']++; i++; }
    i = 0; while (t[i] != '\0') { count[t[i]-'a']--; i++; }
    for (i = 0; i < 26; i++) if (count[i] != 0) answer = 0;
    if (answer) printf("Anagram\n"); else printf("Not Anagram\n");
    return 0;
}
