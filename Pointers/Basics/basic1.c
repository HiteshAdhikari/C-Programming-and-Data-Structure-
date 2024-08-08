#include<stdio.h>
void main(){
    int a ;
    int *b = &a;
    scanf("%d", b);// here scanf() take the value and put it to the address(b).
    printf("%d\n", b);
    printf("%d", *b + 10 );
}