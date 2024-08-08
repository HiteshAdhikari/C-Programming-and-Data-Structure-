#include<stdio.h>
void main(){
    int a[5] = {10,20,30,40,50};
    // int *p1 = a;
    int *p1 = &a[0];
    int *p2 = a+4;
    // printf("%d", p2-p1);
    // printf("%d", *p2-*p1); // (50-10)= 40 is printed 

    // Subtraction on pointer
    printf("%d", p2-1);
}       