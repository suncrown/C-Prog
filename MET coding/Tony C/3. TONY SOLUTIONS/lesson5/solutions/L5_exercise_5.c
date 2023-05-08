#include<stdio.h>
#include<math.h>


float myfact(float); /* prototype */

 int main(void)
 {
  float x;
  printf("\nPlease enter x \n");
  scanf("%f",&x);
  printf("%f    %f",myfact(x),exp(x) ) ;
 }
  
 float myfact(float x)
 {
  return(  1.0 + x + (pow(x,2.0)/2.0) + (pow(x,3)/6.0) + ( pow(x,4)/24.0) ); 
 }
