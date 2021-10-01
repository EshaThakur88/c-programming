#include<stdio.h>

int main(){
    int marks[5];
     printf("Enter the marks for student 1:\n", marks[0]);
     scanf("%d", &marks[0]);
     printf("Enter the marks for student 2:\n", marks[1]);
     scanf("%d", &marks[1]);
     printf("Enter the marks for student 3:\n", marks[2]);
     scanf("%d", &marks[2]);
     printf("Enter the marks for student 4:\n", marks[3]);
     scanf("%d", &marks[3]);
     printf("Enter the marks for student 5:\n", marks[4]);
     scanf("%d", &marks[4]);

     for (int i = 0; i < 5; i++)
     {
         printf("The marks of student %d is %d.\n", i+1, marks[i]);
     }
     
return 0;
}