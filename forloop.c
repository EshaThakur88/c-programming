#include <stdio.h>

int main()
{
    int num;
    printf("Enter number upto which you would like to print numbers starting from 1.\n");
    scanf("%d", &num);

    int i;
    for (i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}