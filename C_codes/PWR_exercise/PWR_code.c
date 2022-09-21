#include <stdio.h>

int main(void)
{
//A - start, B - end, C - mid, T - data table, N - length of T, X - index in T
//the previos element of T must be equal or smaller
    int T[] = {1, 3, 50, 1000, 2000};
    int N = sizeof(T)/sizeof(int);
    int A=0, B=N-1, C, X, number;
    printf ("Insert a number:\n");
    scanf ("%d", &number);
    int flag = 0;

    C = (B+A)/2;
    for (;;)
    {
        
        if (flag == N)
        {
            printf ("not found");
            break;
        }
        else if (T[C] == number)
        {
            X = C;
            printf ("found on place: %d", X+1);
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
