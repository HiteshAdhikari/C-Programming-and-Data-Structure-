#include<stdio.h>
void main(){
    int a[5] = {10,20,30,40,50};
    int *ptr = a;
    ++ptr;
    ++ptr;
    --*ptr;//unary operaator so associativity from R to L.
    printf("%d", *ptr);
}