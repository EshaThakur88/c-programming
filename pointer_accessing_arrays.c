#include<stdio.h>

int main(){
    int marks[4];
    int *ptr;
    ptr = marks;

    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of student %d:\n", i+1);
        scanf("%d", ptr);
        ptr++;
    }
    ptr = marks;

    for (int i = 0; i < 4; i++)
    {
        printf("The marks of student %d is %d.\n", i+1, *(ptr+i) );
    }
return 0;
}