#include<stdio.h>
// write a c program to print first n natural numbers using do while loop.

int main(){

    int n;
    printf("Enter the number upto which you want to print first natural numbers:");
    scanf("%d", &n);

    int i=1;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i<5);
    
   
 return 0;

}