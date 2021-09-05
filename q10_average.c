#include<stdio.h>

float average(int x, int y, int z );

int main(){
  
int a, b, c, z ;

printf("Enter the value of a:");
scanf("%d", &a);

printf("Enter the value of b:");
scanf("%d", &b);

printf("Enter the value of c:");
scanf("%d", &c);


printf("The average of %d, %d, %d are %f", a, b, c, average(a,b,c));

return 0;
}

float average(int x, int y, int z ){
   
   return (float)(x+y+z)/3;

}