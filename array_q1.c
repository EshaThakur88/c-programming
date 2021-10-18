#include <stdio.h>

int main()
{
    int A[10];
    int n;
    printf("Enter the value of number for which u want to multiplication table:");
    scanf("%d", &n);
    printf("The elements of the array A[] are:\n");

    for (int i = 0, j = 1; i < 10, j <= 10; i++, j++)
    {
        A[i]=n*j;
        printf("%dX%d=%d\n",n, j, A[i]);
    }

    return 0;
}
