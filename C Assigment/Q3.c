#include <stdio.h>

int main() {
    int n = 5;

    printf("%c", 'A');

    for (int i = 1; i < n; i++) {
        printf(" %c", 'A' + i);
    }

    return 0;
}
