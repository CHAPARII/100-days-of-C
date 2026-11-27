#include <stdio.h>
int main() {
    char s[200], temp; int i = 0, length = 0;
    fgets(s, sizeof(s), stdin);
    while (s[length] != '\0' && s[length] != '\n') length++;
    for (i = 0; i < length/2; i++) { temp = s[i]; s[i] = s[length-1-i]; s[length-1-i] = temp; }
    s[length] = '\0';
    printf("%s\n", s);
    return 0;
}
