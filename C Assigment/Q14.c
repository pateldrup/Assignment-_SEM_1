#include <stdio.h>

int main() {
    int n, r, num, k;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { printf("\n"); return 0; }

    for (r = 1; r <= n; r++) {
        for (k = 0; k < 2 * (n - r); k++) putchar(' ');

        for (num = 1; num <= 2 * r - 1; num++) {
            printf("%d", num);
            if (num < 2 * r - 1) putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}