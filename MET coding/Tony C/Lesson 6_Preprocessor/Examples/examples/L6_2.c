 #define PI 3.14159
 #define AREA(x) (PI*x*x)
 #include<stdio.h>
 
 int main(void)
 {
 float radius;
 printf(" type in the radius\n");
 scanf("%f",&radius);
 printf("area = %f \n",AREA(radius));
 return(0);
 } 


