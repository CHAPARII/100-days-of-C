#include <stdio.h>
int main() {
    char s[200], ch; int i = 0, spaces = 0, digits = 0, special = 0;
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0' && s[i] != '\n') {
        ch = s[i];
        if (ch == ' ') spaces++;
        else if (ch >= '0' && ch <= '9') digits++;
        else if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))) special++;
        i++;
    }
    printf("Spaces = %d\nDigits = %d\nSpecial characters = %d\n", spaces, digits, special);
    return 0;
}
