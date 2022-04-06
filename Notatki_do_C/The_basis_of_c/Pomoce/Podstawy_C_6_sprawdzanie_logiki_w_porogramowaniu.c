#include <stdio.h>

int main()
{
    int a = 3, b = 4, c = (a > b);

    if (c > 0) 
    {
        printf("Prawda, bo zdanie a < b ma znak logiczny: %d", c);
    }
    else
    {
        printf("Falsz, bo zdanie a < b ma znak logiczny: %d", c);
    }

    
    return 0;
}
