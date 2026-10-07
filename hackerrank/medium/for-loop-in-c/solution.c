#include <stdio.h>

int main() {
    int a, b;
    const char *names[] = {"zero", "one", "two", "three", "four",
                           "five", "six", "seven", "eight", "nine"};

    scanf("%d\n%d", &a, &b);

    for (int n = a; n <= b; n++) {
        if (n >= 1 && n <= 9) {
            printf("%s\n", names[n]);
        } else if (n % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
    }

    return 0;
}
