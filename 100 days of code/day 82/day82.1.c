#include <stdio.h>
enum Light { RED, YELLOW, GREEN };
int main() {
    int light;
    scanf("%d", &light);
    switch (light) {
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
        default: printf("Invalid light\n");
    }
    return 0;
}
