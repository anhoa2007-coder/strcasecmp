#include <stdio.h>
#include <strings.h>

int main() {
    if (strcasecmp("Hello", "HELLO") == 0)
        printf("Giống nhau\n");
    else
        printf("Khác nhau\n");
    return 0;
}
