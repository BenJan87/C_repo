#include <stdio.h>



int fibonaci(int n) {
    int x;
    
    if (n == 1) x = 0;
    if (n == 2) x = 1;
    if (n > 2) x = fibonaci(n - 1) + fibonaci(n - 2);
    
    return x;
}

int multi_fib(int n) {

    for ( int i = 0; i < n; i++) {
        if (fibonaci(i)*fibonaci(i+1) == n) return 1;
    }

    return 0;

}



int main(void) {

    int n;
    printf("Podaj liczbe: \n");
    scanf("%d", &n);
    
    ( multi_fib(n) == 1) ? printf("Liczba %d jest iloczynem dwoch kolejnych liczb ciagu Fibpnacciego", n) : printf("Liczba %d nie jest iloczynem dwoch kolejnych liczb ciagu Fibpnacciego", n);

    return 0;
}

















