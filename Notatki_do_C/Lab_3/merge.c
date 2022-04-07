#include <stdio.h>
#include <stdlib.h>


void draw(int t[], int n) {
    int x;
    for (int i = 0; i < n; i++ ) {

        x = rand() % 11;
        t[i] = x;

    }
}

int temp[];

void rem_dup(int t[], int n) {
    
    int flag = 0;

    for (int i = 0; i < n-1; i++) {

        for (int j = 1; j < n-1; j++) {

            if (t[i] != t[j]) {
                temp[]
            }
        }
    }


}




void swap(int *aptr, int *bptr) {

    int temp = *aptr;
    *aptr = *bptr;
    *bptr = temp;
}



void bubble_sort(int t[], int n) {

    for (int i = 0; i < n; i++) {
        for (int j=0; j < n - i - 1; j++) {
            if (t[j] > t[j+1]) {
                swap(&t[j], &t[j+1]);
            }
        }

    }

}


void merge(int a[], int b[], int exit[], int n1, int n2) {
    int i = 0, j = 0, flag = 0;

    for (int k = 0; k < n1 + n2; k++) {

        if (i == n1) {
            exit[flag] = b[j];
            j++;
            flag++;
        }

        else if (j == n2) {
            exit[flag] = a[i];
            i++;
            flag++;
        }

        else if (a[i] < b[j]) {
            exit[flag] = a[i];
            i++;
            flag++;
        }

        else {
            exit[flag] = b[j];
            j++;
            flag++;
        }
        
        
        
    }
}









int main(void) {

    int n1, n2;
    printf("Podaj dlugosci tablic:\n");
    scanf("%d%d", &n1, &n2);
    int t1[n1], t2[n2];

    draw(t1, n1);
    draw(t2, n2);

    // rem_dup(t1, n1);
    // rem_dup(t1, n2);


    bubble_sort(t1, n1);
    bubble_sort(t2, n2);

    int t_bond[n1 + n2];

    merge(t1, t2, t_bond, n1, n2);


    for (int z = 0; z < n1 + n2; z++) {
        printf("%d ", t_bond[z] );
    }



    return 0;
}

