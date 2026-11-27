#include <stdio.h>
int main() {
    char s[100]; int i, j, length = 0;
    scanf("%99s", s);
    while (s[length] != '\0') length++;
    for (i = 0; i < length; i++) {
        for (j = i; j < length; j++) {
            for (int k = i; k <= j; k++) printf("%c", s[k]);
            printf("\n");
        }
    }
    return 0;
}
