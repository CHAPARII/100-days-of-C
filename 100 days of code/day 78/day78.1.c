#include <stdio.h>
int main() {
    FILE *file; char filename[100], ch; int vowels = 0, consonants = 0;
    scanf("%99s", filename); file = fopen(filename, "r");
    if (file == NULL) return 1;
    while ((ch = fgetc(file)) != EOF) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') vowels++;
            else consonants++;
        }
    }
    fclose(file); printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
