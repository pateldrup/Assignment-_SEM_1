
#include <stdio.h>

int main() {
    int n, i, j, k;
    if (scanf("%d", &n) != 1) return 0;   

    if (n <= 0) {                         
        printf("\n");
        return 0;
    }

    if (n > 26) n = 26;               

    for (i = 1; i <= n; i++) {
    
        for (k = 0; k < 2 * (n - i); k++) putchar(' ');

        
        for (j = 0; j < i; j++) {
            char ch = 'A' + j;
            putchar(ch);
            if (j < i - 1) putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}