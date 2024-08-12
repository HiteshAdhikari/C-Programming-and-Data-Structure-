#include<stdio.h>
void main(){
    int a[2][3][4]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};

    printf("%d\n",&a);
    // Here printing the address of the entire 3D array

    printf("%d\n",&a+1);
    // Here printing the base address of the next continuous 3D array.

    printf("%d\n",a);
    // Printing the base address of 0th 2D array.

    printf("%d\n",a+1);
    // Printing the Base address of 1st 2D array

    printf("%d\n",*(a+1)+2);
    // Printing the Base address of 2nd 1D array of 1st 2D array. 
    
    printf("%d", a[1][2][1]);
    //  Printing the value of 1 element of 2nd 1D array of 1st 2D array.

    //Here, I showed how compiler internally evaluate the above value. 
    printf("%d\n",*(*(*(a+1)+2) + 1));
    //  Printing the value of 1 element of 2nd 1D array of 1st 2D array.




}