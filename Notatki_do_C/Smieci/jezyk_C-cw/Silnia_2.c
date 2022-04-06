#include <stdio.h>
int silnia(int n) {
        if (n == 0) return 1;
        else return n*silnia(n-1);
    }

int main(void) {
    int n;
    printf("Podaj liczbe calkowita: \n");
    scanf("%d", &n);

    
    printf("%d", silnia(n));
    return 0;
}
