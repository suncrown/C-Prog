/* pointer to a function program */
#include<stdio.h>
#include<math.h>

void  table(int ,int ,float (*f)(int) );
float sqroot(int);
float square(int);
float cube(int);

int main(void)
     {
      table(1,10,cube );
      return(0);
     }

void table(int x0,int x1, float(*f)(int)  )
     {
      int i;
      for(i=x0;i < x1;i++)
          printf("%d %f  \n", i, (*f)(i) );
     }

float sqroot(int a)
      {
       return( sqrt(a) );
      }

float square(int a)
      {
       return(a*a);
      }

float cube(int a)
      {
       return(a*a*a);
       }   
