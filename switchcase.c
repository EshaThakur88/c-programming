#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age");
    scanf("%d", &age);
    
    switch (age)
    {
    case 1:
        printf("the age is 1");
        break;
    case 12:
    printf("the age is 12");
     break;
    
    default:
    printf("the age is neither 1 nor 12");
    
    }
    return 0;
    }