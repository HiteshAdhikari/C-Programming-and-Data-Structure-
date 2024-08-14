#include<stdio.h>
#include<string.h>
void main(){
    char str[30] = "githubisagoodversioncontrol";
    char str1[30];
    
    printf("%s\n", str);
    // In this %s need a base address, that is return by the str (array name without subscript([]) means base address) and will print until the "NULL" character(\0).

    printf("%c\n", str[0]);
    // In this %c is taking an ASCII value that is return by str[0] and printing it.

// About pointer initialization of a string:-
    char *p = "Hello";
    // Here we are declaring a pointer and assigning it the base address. How Base address because if a string is in double quotes it gives the base address
    printf("%s\n", p);
    /*  p[0] = "a";
    this will give error */
    str[9] = 'R';
    printf("%s", str);
    // this will simply change the value in the str[9].



// Some general function in string.h
    strcpy(str1,str) ;
    // This function copy the content of the source(str) to traget(str1). Here, also we are providing the base address.  
    printf("%s\n", str1);

    strupr(str);  
    // all the letters are in uppercase of str.
    // strlwr(str) will make all characters in lower case.
    printf("%s\n", str);  

    strrev(str1);
    // this function just reverse the string str1.
    printf("%s\n", str1);  

    printf("%d", strlen(str1));  
    // this print the actual length of the str1
}