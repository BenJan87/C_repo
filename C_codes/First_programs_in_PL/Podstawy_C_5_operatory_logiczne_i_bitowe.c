#include <stdio.h>

int main(void) {
    unsigned short int a = 6, b = 7;
    /* a - 0000 0000 0000 0110
       b - 0000 0000 0000 0111
    */
    unsigned short int result_con = a & b;
    printf("Koniunkcja a,b: %hu\n", result_con);

    unsigned short int c = 4, d = 19;
    /* c - 0000 0000 0000 0100
       d - 0000 0000 0001 0011
    */
    
    unsigned short int result_tylda = ~(c | d);
    printf("Negacja alternatywy c, d: %hu\n", result_tylda);
    
    unsigned short int result_non_bit = a && b;
    printf("\na=6 jest wieksze od zera oraz b=7 jest wieksze od zera,\nzatem wartosc logiczna powinna wynosic 1,\nwartosc wyliczona: %hu\n", result_non_bit);
    return 0;
}
