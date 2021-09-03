#include<stdio.h>

int main(){
    int n;
    printf("Write the number upto which you want sum:");
    scanf("%d", &n);
    
    int sum = 0, i = 1;

    while (i<=n)
    {
       sum += i;
       i++;
       
    }
    printf("Sum of first n natural numbers is = %d", sum);

    return 0;
}