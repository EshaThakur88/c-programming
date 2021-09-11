#include<stdio.h>

double e(int m, int n);

int main(){
  printf("%lf", e(2, 7));
    return 0;
}

double e(int m, int n){
  static double p =1, f=1;
  double z;
  if (n==0)
  {
      return 1;
  }
  else{
      z= e(m, n-1);
      p*=m;
      f*=n;
     return z + p/f;
  }

 
}