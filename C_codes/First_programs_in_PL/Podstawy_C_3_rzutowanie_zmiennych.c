#include <stdio.h>

int main() {
    float e = 2.71;
    float result = 2*e;

    result = (int) result;

    printf("Moj wynik to: %.1f", result);
    return 0;
}