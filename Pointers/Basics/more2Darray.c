#include<stdio.h>
void main(){
    int a[4][5] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};


    printf("%d", *(*(a + **a +2)+3));

    /*You can solve by simply seeing it:-
    1. binary precedence is lower than dereference operator.
    2. Solve **a means value of 0th element of 1st 1-D array i.e 1;
    3. Now solve (a + 1 + 2) => a+3 i.e go to the base address of 3rd 1-D array.i.e 16-20 1-D array
    4. *(a+3) mean pointing to the 0th element of the 3rd 1-D array.
    5. *(a+3) + 3 => this means go to the 3rd element of the 3rd 1-D array
    6. *(*(a+3) + 3) => now return the inside value i.e 19.
    */ 

}