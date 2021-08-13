#include<stdio.h>

int main(){

int num;
printf("Enter a number\n");
scanf("%d", &num);
printf("Multiplication Table of %d is as follows:\n", num);
for (int i = 1; i < 11; i++)
{
    printf("%d X %d= %d\n", num,i,num*i);
}

return 0;

}