#include <stdio.h>
sumAndAvg(int a, int b, int *sum, float *avg){
    *sum = a + b;
    *avg = (float) (*sum)/2;

}
int main()
{
    int a, b, sum;
    float avg;
    a = 2;
    b = 3;
    sumAndAvg(a, b, &sum, &avg);
    printf("The value of sum is %d.", sum);
    printf("The value of average is %f.", avg);
    return 0;
}