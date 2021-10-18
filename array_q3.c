#include <stdio.h>

int main()
{
    int array[2][4][5];
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
        printf("The address of A[%d][%d][%d] is %u.\n", i,j,k, &array[i][j][k]);
            }
        }
    }
    return 0;
}