#include <stdio.h>

int sum(int x);
int Sum(int x);
int SUM(int x);

int main()
{
    int n;
    printf("Enter the number upto which you want to find the sum:");
    scanf("%d", &n);

    printf("the sum of first %d numbers is %d.\n", n, sum(n));

    printf("The sum of first %d numbers is %d.\n", n, Sum(n));

    printf("The sum of first %d numbers is %d.", n, SUM(n));

    return 0;
}

int sum(int x)
{

    if (x == 0)
    {
        return 0;
    }
    else
    {
        return sum(x - 1) + x;
    }
}

int Sum(int x)
{

    return x * (x + 1) / 2;
}

int SUM(int x)
{
    int s = 0;
    for (int i = 1; i <= x; i++)
    {
        s = s + i;
    }
    return s;
}