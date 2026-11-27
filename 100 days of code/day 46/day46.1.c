#include <stdio.h>
int main() {
    char s[200], result[200]; int i = 0, j = 0; char ch;
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0') {
        ch = s[i];
        if (!(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')) result[j++] = ch;
        i++;
    }
    result[j] = '\0';
    printf("%s", result);
    return 0;
}
