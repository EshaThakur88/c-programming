#include<stdio.h>
int sum(int x,int y);
int main(){
    int a = 3, b = 5;
         printf("The numbers are %d and %d.\n", a, b);
         printf("The sum of the numbers is %d.\n", sum(a,b));
         printf("The numbers are %d and %d after the function call.\n", a, b);

return 0;
}
int sum(int x,int y){
    
    return x + y;
    
}
