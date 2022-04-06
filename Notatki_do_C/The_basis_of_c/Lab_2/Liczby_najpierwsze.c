#include <stdio.h>
// Funkcja sprawdzająca, czy dana liczba jest pierwsza
int prime_num(int n) {
    
    if (n<2) return 0;
		
	for(int i=2;i*i<=n;i++) {
		if (n%i==0) return 0;
    }
    return n;

}

// Liczba cyfr w danej liczbie
int number_of_digits(int x) {

    int flag = 0; 
    
    while ( x != 0) {
        x /= 10;
        flag += 1;
    }
    
    return flag;
}

//Sprawdzanie, czy ciąg jest niemalejący
int arr_check(int x, int len) {
    int arr[len];
    int temp = x;
    int rest;

    for(int j = len - 1; j >= 0; j--) {
        rest = temp % 10;
        arr[j] = rest;
        temp /= 10;
    }
    
    for (int i = 0; i < len - 1; i++ ) {
        if (arr[i] > arr[i+1]) return 0;
    }

    printf("%d ", x);
    return 1;
}
    

int main(void) {
    int n;
    printf("Wpisz liczbe: \n");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        int x = prime_num(i);
        if (x == 0) continue;
        
        int len;
        len = number_of_digits(x);
        arr_check(x, len);
        
        
    }

    return 0;
}