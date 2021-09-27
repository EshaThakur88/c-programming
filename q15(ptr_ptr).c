#include<stdio.h>

int main(){
    int j=4;
    int *i= &j;
    int **k=&i;
         printf("The value of i is %d.", **k);
return 0;
}