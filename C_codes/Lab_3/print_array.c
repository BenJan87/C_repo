#include <stdio.h>

void print_array(int k, int par, int n, int t[]) {
    if (k >= n) {
        printf("Za duzy indeks");
    }

    else if (par == 1) {

        
        for (int *j=t+k; j < t + n; j++) {
            printf("%d ", *j);
        }
        for (int* i=t; i < t + k; i++ ) {
            printf("%d ", *i);
        }
    }

    else {
        for (int *a=t+k; a > t-1; a--) {
            printf("%d ", *a);
        }
        for (int *b=t+n-1; b > t+k; b--) {
            printf("%d ", *b);
        }
    }
}



int main(void) {
    
    int n = 20;
    int k, par;
    int t[n];
    int x = 0;

    for (int i=0; i < n; i++) {
        t[i] = x;
        x += 1;
    }
    
    printf("Podaj indeks k: \n");
    scanf("%d", &k);
    printf("Rosnaco - wpisz 1, malejaco - wpisz 0:\n");
    scanf("%d", &par);
    print_array(k, par, n, t);


    return 0;
}