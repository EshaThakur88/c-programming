#include<stdio.h>


    // with arguments and with return value 
    
int sum(int a,int b){ 
  return a+b;
}

int main(){
    int a,b,c;
    a=7;
    b=9;
    c=sum(a,b);
    printf("the sum is %d",c);
    return 0;
    }
