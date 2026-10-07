#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[100];

    scanf("%c", &ch);          // read a single character
    scanf("%s", s);            // read a word (stops at whitespace)
    scanf("\n");               // consume the leftover newline
    scanf("%[^\n]%*c", sen);   // read the full sentence, including spaces

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
