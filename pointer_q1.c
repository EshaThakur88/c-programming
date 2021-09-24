#include<stdio.h>

int main(){
     int i=5;
     int *j;
     j=&i;
     printf("the value of i is %d.\n", i);
     printf("the value of j is %d.\n", j);
     printf("the value of j is %d.\n", &i);
     printf("the address of i is %u.\n", j);
     printf("the address of j is %u.\n", &j);
     printf("the value at i is %d.\n", *j);
     printf("the value of j is %d.", *(&j));


return 0;
}