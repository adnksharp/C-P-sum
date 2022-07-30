#include <stdio.h>

int main()
{
    int c = 0, k = 0;
    for (int i = 0; i < 101; i++)
    {
        if (i % 2 == 0)
            c += i;
        else
            k += i;
    }
    printf("Sumatoria de 0 - 100\n\tpares: %d\n\timpares: %d\n", c, k);
    return 0;
}