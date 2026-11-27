#include <stdio.h>
enum Role { ADMIN, USER, GUEST };
int main() {
    int role;
    scanf("%d", &role);
    if (role == ADMIN) printf("Administrator access\n");
    else if (role == USER) printf("User access\n");
    else if (role == GUEST) printf("Guest access\n");
    else printf("Invalid role\n");
    return 0;
}
