#include <stdio.h>

int main(void) {

    int pom_1, pom_2, pom_3, pom_4;

    //Podanie ilu wymiarowa będzie tablica - nie trzeba//
    int pomiar[4];

    pomiar[0] = 0;
    pomiar[1] = 1;
    pomiar[2] = 2;
    pomiar[3] = 3;

    //można również:
    int tablica[4] = {0, 1, 2, 3};
    printf("%d", tablica[1]);

    //istnieja również wielowymariowe:
    int pomiary[3][3] = { {1,2,3},
                         {4,5,6},
                         {7,8,9}};

    return 0;
}