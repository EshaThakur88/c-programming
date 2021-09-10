#include<stdio.h>

int factorial(int x);

int main(){
   int y;
   printf("Enter a number for which you want to find the factrial: \n");
   scanf("%d", &y);

   printf("The factorial of %d is %d.", y, factorial(y));

  return 0;
}


int factorial(int x){

    if (x==1 || x==0)   
    {
        return 1;
    }
    else{
        return x * factorial(x-1);
        }

}