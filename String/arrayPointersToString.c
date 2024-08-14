#include<stdio.h>
void main(){

// Showing Array Pointers to String s:-

    char *s[5]={"London", "Birmingham", "Houston","Milpitas", "Macau" };
    // s is an array of 5 elements where all elements store the address of type character.
     
     char **ptr[5] ={s, s+1, s+2, s+3, s+4};
    // ptr is an array of 5 elements where all element is a double pointer of type character.

     char ***p = ptr;
    //  p is triple pointer variable of type character storing the base address of ptr.

    printf("%s\n", **++p); 
    // first the value in p is incremented and then double pointer.

    printf("%s\n", *--*++p+3);
    // p is incremented and than go to that address then decrement the value and then go to that address and then increment the value by 3 inside it .

    printf("%s\n", *(p[-2])+3);
    // here solve  this *(*(p-2)) and then increment the value by 3.

    printf("%s\n", p[-1][-1]+1);
    // in this solve this *(*(p-1)-1) and then increment by 1.

    printf("%s\n", **p++);
    // Remember:- The post decrement will only be done on the p. So, first go to **p and print the value then increment the p.
    
    printf("%c\n", ***++p+2);
    // here first solve ***++p and then increment that value by 2.

    printf("%c", s[1][2]);
    // simply printing the value.


}