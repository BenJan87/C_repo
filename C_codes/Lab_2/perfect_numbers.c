#include <stdio.h>

int main(void) {
    int n, i, j, k=0;
    printf("Set the limit:\n");
    scanf("%d", &n);


    for ( j = 2; j < n; j++) {
        int divisiors = 0;
        for ( i = 1; i < j; i++ ) {
            
            if ( j % i == 0 ) {
                
                divisiors += i;
                
            }
        }
        if ( divisiors == j) {
                printf("%d ", j);
                k += 1;
        }
        
    }
    printf("\nTych liczb jest: %d", k);
    return 0;
}