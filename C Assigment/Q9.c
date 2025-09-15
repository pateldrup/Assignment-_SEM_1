#include <stdio.h>

int main() {
    int n, i, j;
    if (scanf("%d", &n) != 1) return 0;   

    if (n <= 0) {
        printf("\n");
        return 0;
    }

    if (n > 26) n = 26;

    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            char ch = 'A' + j;
            printf("%c", ch);
            if (j < i - 1) printf(" ");
        }
        printf("\n");                 
    }

    return 0;
}