#include <stdio.h>
enum Status { SUCCESS, FAILURE, TIMEOUT };
int main() {
    int status;
    scanf("%d", &status);
    if (status == SUCCESS) printf("Operation successful\n");
    else if (status == FAILURE) printf("Operation failed\n");
    else if (status == TIMEOUT) printf("Operation timed out\n");
    else printf("Invalid status\n");
    return 0;
}
