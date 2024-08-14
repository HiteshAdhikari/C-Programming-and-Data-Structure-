#include<stdio.h>
void main(){
    int i = 10;
    float b = i;
    // Here you can see i am assigning int value to float but no error by compiler. Because compiler internally used typecasting mean it(compiler) says that you want to assign the 2 Bytes of data (Int) to the 4 Bytes (Float) then no problem ....now compiler will evaluate the i as float temporarily.
    printf("%f",b);
    // Such typecast is known as Implicit Typecasting or Coersion.


    float a = 10.35;
    int c = a;
    printf("%f\n", c);
    // here you can see it printing any garbage value.
  
    // That's why we use Explicit typecasting but some data will lost as we are trying to assign 4 Byte of data to @ Byte of data.
    int d = (float) a;
    printf("%d", d); // Data Lost
 

}