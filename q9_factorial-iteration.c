#include <stdio.h>

int fact(int x);
int  fac(int x);

int main()
{
    int n, r;
    printf("Enter the number for which you want to find factorial: ");
    scanf("%d", &n);
    r = fact(n);
    printf("the factorial of %d is %d.\n", n, r);

    printf("The factorial of %d is %d.\n", n, fac(n));
    return 0;
}

int fact(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        return fact(x - 1) * x;
    }
}

int fac(int x){
    int f=1;
    for (int i = 1; i <= x; i++)
    {
        f=f*i;
    }
    return f;
}