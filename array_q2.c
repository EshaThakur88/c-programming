#include <stdio.h>
void display(int arr[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void reverse(int *arr)
{
    int i, j;
    for (i = 0, j = 4; i < j; i++, j--)
    {
        swap(&arr[i], &arr[j]);
    }
}

int main()
{
    int A[5] = {2, 4, 3, 5, 6};
    reverse(A);
    display(A);
    return 0;
}