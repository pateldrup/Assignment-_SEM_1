#include <stdio.h>

int main() {
    int n, i, j;
    if (scanf("%d", &n) != 1) return 0;   

    if (n <= 0) {                         
        printf("\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= n - i; j++) {
            putchar(' ');
        }
        
        for (j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
