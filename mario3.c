#include <stdio.h>
//display or run loops when n is less than 1
int main(void)
{
    int n;
    do
    {
        n = 4;
    }
    while (n < 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}