#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number from which you want to follow reverse order for printing first n natural numbers: ");
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}