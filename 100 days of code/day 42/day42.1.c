#include <stdio.h>
int main() {
    char s[200], ch; int i = 0, vowels = 0, consonants = 0;
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0') {
        ch = s[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') vowels++;
            else consonants++;
        }
        i++;
    }
    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
