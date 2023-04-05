#include<stdio.h>
#include<string.h>
#include<stdlib.h>   

#define SIZE 10 

/* Not that this is slightly different than the question in the notes 0..9  */

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

      for(x=0;x<SIZE;x++)
        {
         v[x] = x*x + 6*x -2 ; 
        }
     }




