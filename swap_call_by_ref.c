#include <stdio.h>
void swap(int *x, int *y);

int main()
{
    int a = 3, b = 2;
    printf("The number a and b before swap are %d and %d.\n", a, b);
    swap(&a, &b);
    printf("The numbers a nd b after swap are %d and %d.\n", a, b);
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}