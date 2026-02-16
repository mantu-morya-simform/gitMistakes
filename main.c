#include <stdio.h>
#include <string.h>

int main() {
    char color[50];

    printf("Hello, world!\n");

    printf("What's your favorite color? ");
    fgets(color, sizeof(color), stdin);

    // Remove the newline character, if present
    color[strcspn(color, "\n")] = '\0';

    printf("Wow, I like %s too!\n", color);
    return 0;
}