#include<stdio.h>
// How call by reference is used with by default static scoping.
int x; 
void Q( int z){
    z = z + x;
    printf("%d\n",z);
}
void P(int *y){
    int x = *y + 2;
    Q(x);
    *y = x-1;
    printf("%d\n", x);
}
void main(){
    x = 5;//provided to global variable.
    P(&x);
    printf("%d", x);
}