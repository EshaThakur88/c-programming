#include<stdio.h>

int main(){
   int n;
   printf("Enter the number of which you want the multiplication table:");
   scanf("%d", &n);

   printf("Multiplication table of %d in reverse order is:\n", n);

   for (int i = 10; i; i--)
   {
       printf("%d X %d = %d\n", n, i, n*i);
   }
   
   return 0;

}