#include<stdio.h>
/*void display(int *p, int n){
    int i = 0 ; 
    for (i; i < n; i++)
    // No. of ways you can display 
        // printf("%d\n", i[p]); 
        // printf("%d\n", p[i]);
        // printf("%d\n", *(p+i));
        printf("%d\n", *(i+p));
}*/
void main(){
// Here passing only the base address of the array instead of passing the all element to the funtion display.
   /* int a[5]= {10,20,30,40,50};
    display(a,5);*/


// More Information about Array :-
    int a[5];
    printf("%d\n", a);
    // Here only declared than garbage value.

    int b[3] ={ };
    printf("%d\n",b[1]);
    // accessing without initializing than 0 
    int c[5] ={10,20};
    printf("%d %d",c[0],c[3]);
    // accessing not assigned value than 0 


}