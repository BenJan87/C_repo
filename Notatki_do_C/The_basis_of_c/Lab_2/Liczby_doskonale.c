#include <stdio.h>

int main(void) {
    int n, i, j, k=0;
    printf("Wpisz liczbe, do ktorej program bedzie szukal liczb doskonalych:\n");
    scanf("%d", &n);


    for ( j = 2; j < n; j++) {
        int divisiors = 0;
        // sprawdzamy wszystkie j jako potencjalne liczby doskonale:
        for ( i = 1; i < j; i++ ) {
            // sprawdzamy dzielniki j-tej liczby
            
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