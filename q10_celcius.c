#include <stdio.h>

double fahrenheit(float a);
int main()
{
    double tem, t;
    char ch = 248;

    printf("Enter temperature in Celcius:");
    scanf("%lf", &tem);

    t = fahrenheit(tem);

    printf("%lf%cC to fahrenheit is %lfF.", tem, ch, t);

    return 0;
}
double fahrenheit(float a)
{
    float f;
    f = (a * 9 / 5) + 32;

    return f;
}