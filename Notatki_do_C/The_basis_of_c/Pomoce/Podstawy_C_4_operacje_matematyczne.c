#include <stdio.h>

int main() {
    
    float a=3, b=2, c=3, result;
    
    a /= 3;

    result = b/c;

    printf("Dzielenie przez 3 liczby a=3: %.0f\n", a);
    printf("Dzielenie b/c do 5 miejsca po przecinku: %.5f", result);

    return 0;
}