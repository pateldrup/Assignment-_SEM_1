#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {                
        for (int j = 1; j <= 2 * (n - i); j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");                            
    }

    return 0;
}
