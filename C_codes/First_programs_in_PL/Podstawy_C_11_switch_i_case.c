#include <stdio.h>

int main() {

    int a = 2, b = 2;

    switch (a,b) {
        case 0: printf("zero");
        break;
        case 1: printf("jeden"); break;
        case 3: printf("trzy"); break;
        default: printf("cos innego");
    }
    return 0;
}
