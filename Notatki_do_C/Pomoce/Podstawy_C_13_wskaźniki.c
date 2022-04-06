#include <stdio.h>

int a = 8768, b = 6587, c = 2;

    //wskaźniki - każda zmienna ma swój adres wg komputera

    int *wsk1 = &a;
    //wskaźniki nie działają, keidy są zdefiniowane w mainie, nie wiadomo czemu

int main(void) {
    
    

    // printf("Wywołanie wskaznikow:\n");
    // printf("zmienna a: %d\n", *wsk1);

    // dla wskaznikow: wsk++ - zmienia adres zmiennej o 4 do góry, np:
    printf("%d\n", *wsk1);
    wsk1++;
    printf("%d\n", *wsk1);
    wsk1++;
    printf("%d\n", *wsk1);



    return 0;
}