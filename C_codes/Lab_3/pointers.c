#include <stdio.h>



int main(void) {
    int arr_int[10] = {10, 20, 30, 40, 50, 60, 70 ,80, 90, 100};
    double arr_double[10] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};

    int *ptr_int = arr_int;
    double *ptr_double = arr_double;
    
    printf("Dla int:\n");
    for (int i = 0; i < 10; i++) {
        printf("Zmienna o indeksie %d ma wartosc: %d - na miejscu %d\n",i,*(ptr_int+i), (ptr_int+i));
    }
    
    printf("\nDla double:\n");
    for (int j = 0; j < 10; j++) {
        
        printf("Zmienna o indeksie %d ma wartosc: %lf - na miejscu %d\n",j,*(ptr_double+j), (ptr_double+j));
    }
    return 0;
}