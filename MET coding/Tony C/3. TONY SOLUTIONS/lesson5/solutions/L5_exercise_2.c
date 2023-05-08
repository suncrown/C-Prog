#include<stdio.h>

void my_compare(float,float); /* prototype */

 int main(void)
 {
  float a,b;
  printf("\nPlease enter two numbers that you wish to compare \n");
  scanf("%f,%f",&a,&b);
  my_compare(a,b);
 }
  
 void my_compare(float aa, float bb) /* declaration */
  {
   if( aa ==  bb ) 
    printf("Both numbers are the same");
   else if ( aa < bb)
    printf("%f",aa);
   else printf("%f",bb);

  }
