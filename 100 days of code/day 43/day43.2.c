#include <stdio.h>
int main() {
    char s[200]; int length = 0, i, palindrome = 1;
    fgets(s, sizeof(s), stdin);
    while (s[length] != '\0' && s[length] != '\n') length++;
    for (i = 0; i < length/2; i++) if (s[i] != s[length-1-i]) palindrome = 0;
    if (palindrome) printf("Palindrome\n"); else printf("Not Palindrome\n");
    return 0;
}
