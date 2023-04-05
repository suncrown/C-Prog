#include<stdio.h>

int main(void)
 {
 float num;
 puts("Enter a real number +/-");
 scanf("%f",&num);
 printf("absolute value is %f\n",(num < 0)? -num:num );

 if(num < 0 )
  printf("\n absolute value %f\n",-num);
 else
  printf("\n absolute value %f\n",num);
 return(0);
 } 
