#include<stdio.h>

// void passingarray(int *ptr, int n){
//     for (int i = 0; i < 6; i++)
//     {
//         printf("The %d element of array is %d.\n", i+1, *(ptr+i));
//     }
    
// }

void passingarray(int ptr[], int n){
    for (int i = 0; i < 6; i++)
    {
        printf("The %d element of array is %d.\n", i+1, ptr[i]);
    }
    
}

int main(){
    int arr[] = {2, 4, 5 ,9, 7,3};
    passingarray(arr, 6);
return 0;
}