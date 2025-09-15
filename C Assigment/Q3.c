#include <stdio.h>

int main() {
    int n, i;
    if (scanf("%d", &n) != 1) return 0;  

    if (n <= 0) {                        
        printf("\n");
        return 0;
    }

    if (n > 26) n = 26;                 

    for (i = 0; i < n; i++) {
        char ch = 'A' + i;             
        printf("%c", ch);               
        if (i < n - 1) printf(" ");       
    }
    printf("\n");                        
    return 0;
}
