#include <stdio.h>





int main(void) {
    double x=5.9;
    double *ptr = &x;

    printf("wartosc: %lf\n", x);
    printf("Wskaznik jako wartosc: %lf", &x);


    return 0;
}