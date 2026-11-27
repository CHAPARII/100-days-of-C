#include <stdio.h>
enum Color { RED, BLUE, GREEN };
int main() {
    char *names[] = {"RED", "BLUE", "GREEN"}; int i;
    for (i = RED; i <= GREEN; i++) printf("%s = %d\n", names[i], i);
    return 0;
}
