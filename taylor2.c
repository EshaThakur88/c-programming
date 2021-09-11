#include <stdio.h>

double e(int m, int n);
double E(int m, int n);

int main()
{

    printf("%lf\n", e(2, 10));
    printf("%lf", E(2, 10));
    return 0;
}

double e(int m, int n)
{
    double s = 1;
  while (n>0)
  {
      s = 1 + m*s/n;
      
      n--;
  }
    return s;
}

double E(int m, int n){
   double den=1, num=1, s=1;
   for (int i = 1; i <= n; i++)
   {
       num*=m;
       den*=i;
       s = s + num/den;
   }
   
   return s;

}