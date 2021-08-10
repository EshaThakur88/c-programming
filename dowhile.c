#include <stdio.h>

int main()
{

    int num;
    printf("Enter number upto which you would like to print numbers starting from 1.\n");
    scanf("%d", &num);

    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i < num);

    return 0;
}