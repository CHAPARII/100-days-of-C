#include <stdio.h>
int main() {
    char s[200]; int i = 0, newWord = 1;
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0') {
        if (s[i] != ' ' && s[i] != '\n' && newWord) { printf("%c", s[i]); newWord = 0; }
        if (s[i] == ' ') newWord = 1;
        i++;
    }
    printf("\n");
    return 0;
}
