#include <stdio.h>

int main()
{
    int i, j;
    for ( i = 1; i < 11; i++) {
        printf("\n");

        for ( j = 1; j < 11; j++) {
            if (( (i*j) % 2 ) == 0 ) {
                printf("-\t");
                continue;
            }
            printf("%d\t", i*j);

        }
    }

    return 0;
}