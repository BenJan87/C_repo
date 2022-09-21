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
    printf("Give a number: \n");
    scanf("%d", &n);
    
    ( multi_fib(n) == 1) ? printf("LNumber %d is a multiplication of the two consecutive number of Fibonacci sequence", n) : printf("Number %d is not a multiplication of the two consecutive number of Fibonacci sequence", n);

    return 0;
}

















