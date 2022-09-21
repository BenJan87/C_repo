#include <stdio.h>
int list_of_digits(int n) {
    int arr[100], i = 0, r, j;
    while (n != 0) {
        r = n % 10;
        arr[i] = r;
        i++;

        n = n /10;
        
    }
    for (j = i - 1; j > -1; j--) {
        printf("%d ", arr[j]);
    }
}

int main(void) {
    int n = 594456443;

    list_of_digits(n);

    return 0;
}