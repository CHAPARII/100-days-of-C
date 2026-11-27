#include <stdio.h>
int main() {
    char s[200]; int i, j, length = 0, current, maximum = 0, repeated;
    scanf("%199s", s);
    while (s[length] != '\0') length++;
    for (i = 0; i < length; i++) {
        current = 0;
        for (j = i; j < length; j++) {
            repeated = 0;
            for (int k = i; k < j; k++) if (s[k] == s[j]) repeated = 1;
            if (repeated) break;
            current++;
        }
        if (current > maximum) maximum = current;
    }
    printf("%d\n", maximum);
    return 0;
}
