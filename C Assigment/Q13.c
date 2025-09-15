#include <stdio.h>

int main() {
    int n, r, c;
    if (scanf("%d", &n) != 1) return 0;   

    if (n <= 0) {                         
        printf("\n");
        return 0;
    }

    for (r = 1; r <= n; r++) {
       
        for (c = 0; c < n - r; c++) putchar(' ');

        
        for (c = 0; c < 2 * r - 1; c++) putchar('*');

        putchar('\n'); 
    }

    return 0;
}