#include <stdio.h>

int main() {
    char color[50];

    printf("Hello, world!\n");

    printf("What's your favorite color? ");
    fgets(color, sizeof(color), stdin);

    printf("Wow, I like %s too!\n", color);
    return 0;
}