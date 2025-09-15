#include <stdio.h>

int main() {
    int n, i, j;
    if (scanf("%d", &n) != 1) return 0;  

    if (n <= 0) {            
        printf("\n");
        return 0;
    }

    for (i = 0; i < n; i++) {    
        for (j = 0; j < n; j++) { 
            printf("*");
        }
        printf("\n");            
    }

    return 0;
}
