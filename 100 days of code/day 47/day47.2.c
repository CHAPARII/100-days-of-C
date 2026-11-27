#include <stdio.h>
int main() {
    char s[200], word[200]; int i = 0, start = 0, length = 0, max = 0, maxStart = 0, j;
    fgets(s, sizeof(s), stdin);
    while (1) {
        if (s[i] != ' ' && s[i] != '\n' && s[i] != '\0') length++;
        else {
            if (length > max) { max = length; maxStart = start; }
            length = 0; start = i + 1;
        }
        if (s[i] == '\0') break;
        i++;
    }
    for (j = 0; j < max; j++) word[j] = s[maxStart+j];
    word[max] = '\0';
    printf("%s\n", word);
    return 0;
}
