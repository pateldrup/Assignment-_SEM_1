#include <stdio.h>

int main() {
    int n, r, k, s;
    if (scanf("%d", &n) != 1) return 0;   

    if (n <= 0) {                      
        printf("\n");
        return 0;
    }

    
    if (n > 13) n = 13;

    for (r = 1; r <= n; r++) {
        int total = 2 * r - 1;

        
        for (s = 0; s < 2 * (n - r); s++) putchar(' ');

        
        for (k = 0; k < total; k++) {
            char ch = 'A' + k;            
            putchar(ch);
            if (k < total - 1) putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}