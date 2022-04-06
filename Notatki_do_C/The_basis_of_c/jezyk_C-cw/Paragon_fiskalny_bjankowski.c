#include <stdio.h>

int main(void) {
    int a, x, p;
    
    printf("Podaj cene netto: \n");
    scanf("%d", &a);
    printf("Podaj liczbe zakupionych sztuk towarow: \n");
    scanf("%d", &x);
    printf("Podaj podatek VAT w proc: \n");
    scanf("%d", &p);

    int netto = a*x;
    printf("Wartosc netto towarow: %d \n", netto);

    float vat = (float)(a*x*p*0.01);
    printf("Wartosc vat: %.2f\n", vat);

    float brutto = (float)(a*x*(100+p)*0.01);
    printf("Wartosc brutto: %.2f\n", brutto);
    return 0;
}