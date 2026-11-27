#include <stdio.h>
#include <string.h>
struct Point { int x; int y; };
int main() {
    struct Point a, b;
    scanf("%d %d", &a.x, &a.y);
    scanf("%d %d", &b.x, &b.y);
    if (a.x == b.x && a.y == b.y) printf("Identical\n");
    else printf("Not Identical\n");
    return 0;
}
