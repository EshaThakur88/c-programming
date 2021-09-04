#include<stdio.h>
#include<math.h>

int main(){
  int side;
  printf("Enter the side of square:");
  scanf("%d", &side);

  printf("Area of square is %f.", pow(side,2));
  return 0;

}