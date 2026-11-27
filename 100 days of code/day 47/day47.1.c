#include <stdio.h>
int main() {
    char a[200], b[200]; int count[26] = {0}, i = 0, anagram = 1;
    scanf("%199s %199s", a, b);
    while (a[i] != '\0') { count[a[i]-'a']++; i++; }
    i = 0; while (b[i] != '\0') { count[b[i]-'a']--; i++; }
    for (i = 0; i < 26; i++) if (count[i] != 0) anagram = 0;
    if (anagram) printf("Anagram\n"); else printf("Not Anagram\n");
    return 0;
}
