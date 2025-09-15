#include <stdio.h>

int main() {
    int n, i, j, k;
    if (scanf("%d", &n) != 1) return 0;
    if (n <= 0) { printf("\n"); return 0; }

    for (i = 1; i <= n; i++) {
        
        for (k = 0; k < 2 * (n - i); k++) putchar(' ');

    
        for (j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) putchar(' ');
        }
        putchar('\n');
    }
    return 0;
}
