#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    // Read the full line, including spaces
    scanf("%[^\n]%*c", s);

    printf("Hello, World!\n");
    printf("%s\n", s);

    return 0;
}
