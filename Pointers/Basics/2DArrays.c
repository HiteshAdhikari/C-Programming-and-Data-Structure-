#include<stdio.h>
void main(){
    int a[5][6]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
    // Printing the base address of 4th 1-D Array.
    printf("%d\n", *(a+4));

    // Printing the base address of 2nd element of 3th 1-D array.
    printf("%d\n", *(a+3)+2);

    // Printing the value of 5th element of 4th 1-D array.
     printf("%d\n", a[4][5]);
    //  Remember the base address can't be changed because they are constant 
    
    // Printing the value of 5th element of 2nd 1-D array.
    printf("%d\n", *(*(a+2)+3));
}