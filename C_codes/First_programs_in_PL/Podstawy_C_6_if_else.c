#include <stdio.h>

int main() {
    int a=3;

    if ( (a == 5) || (a == 6) )
    {
        printf("Liczba jest rowna 5 lub 6\n");
    }

    else if ( a > 5)
    {
        printf("Liczba jest wieksza od 5\n");
    }

    else 
    {
        printf("Liczba mniejsza od 5\n");
    }
    
    return 0;
}