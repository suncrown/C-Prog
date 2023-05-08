#include<stdio.h>
#include<math.h>

int main(void)
 {
 float a,b,c,x1,x2;
 puts("Enter a b c value for a quatratic equation  a X^2 + b X + c = 0");
 scanf("%f %f %f",&a,&b,&c);

 x1 = ( -b + sqrt( pow(b,2) - 4*a*c) ) / (2*a) ;
 x2 = ( -b - sqrt( pow(b,2) - 4*a*c) ) / (2*a) ;

 printf("The root of the quadratic equation are x1=%f  x2=%f \n", x1,x2);

 return(0);
 } 
