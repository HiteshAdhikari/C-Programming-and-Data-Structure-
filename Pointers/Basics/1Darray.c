#include<stdio.h>
void main(){
    int a[5]= {10,20,30,40,50};
    printf("%d\n", &a);// address of the entire array
    printf("%d\n", a);// base address of 0th element
    printf("%d\n", *&a);// pointing to the address of 0th element 
    printf("%d\n", *(&a+1)); //here *110 means pointing to the base address of the array i.e 110
    printf("%d", *(&a+1)-a); // here 110-100 = 10 than divide by size of element i.e 2 therefore 5.
}