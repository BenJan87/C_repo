#include <stdio.h>

int main(void)
{
//A - początek, B - koniec, C - środek, T - tab z danymi, N - dł tab, X - indeks w tab
//rosnaco uporzadkowa
    int T[] = {1, 3, 50, 1000, 2000};
    int N = sizeof(T)/sizeof(int);
    int A=0, B=N-1, C, X, number;
    printf ("podaj liczbę:\n");
    scanf ("%d", &number);
    int flag = 0;

    C = (B+A)/2;
    while (2>1)
    {
        
        if (flag == N)
        {
            printf ("nie znaleziono");
            break;
        }
        else if (T[C] == number)
        {
            X = C;
            printf ("znaleziono na miejscu %d", X+1);
            break;
        }
        else if (T[C] < number)
        {
            A = C;
            C = (B+A)/2 + 1;
            flag += 1;
        }
        else
        {
            B = C;
            C = (B+A)/2;
            flag += 1;
        }
    }
        
        return 0;
}