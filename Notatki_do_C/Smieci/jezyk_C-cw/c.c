#include <stdio.h>

int main(void) {
    int n = 8;
    for ( int i = n; i > 0; i /= 2 ) {
        printf("%d", i);
    }
    return 0;
}