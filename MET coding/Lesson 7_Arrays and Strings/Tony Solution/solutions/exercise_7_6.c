#include<stdio.h>
#include<string.h>
#include<stdlib.h>   

#define SIZE 20 

void  fill(float []);

int main(void)
     {   
      
       int i; 
       float values[SIZE];
       
       fill(values);

    
       for(i=0;i<SIZE;i++)
       {
       printf("\n%f",values[i]);
       }

     }   


void fill(float v[SIZE])
{
   int x;
   float xpt= -1.0;

      for(x=0;x<SIZE;x++)
        {
         v[x] = (xpt*xpt) + (6*xpt) -2.0;
         xpt = xpt + 0.1; 
        }
     }




