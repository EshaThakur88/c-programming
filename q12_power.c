#include <stdio.h>

int power(int x, int n);

int main()
{
    int r;
    r = power(4, 4);

    printf("%d", r);
    return 0;
}

int power(int x, int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return power(x, n - 1) * x;
    }
}