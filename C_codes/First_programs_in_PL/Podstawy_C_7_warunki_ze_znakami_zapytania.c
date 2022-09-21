#include <stdio.h>

int main()
{
    // skrocony zapis if-ow i else-ow:
    int a = 5;
    if ( a = 5 ) printf("To jest 5\n");
    else printf("To nie jest piec\n");

    printf("\nKolejny przyklad: \n\n");

    // Jeszcze bardziej skrocony zapis
    int b = 6;
    ( b > 6 ) ? printf("Liczba wieksza od 6\n") : printf("Liczba mniejsza lub rowna 6\n");


    return 0;
}