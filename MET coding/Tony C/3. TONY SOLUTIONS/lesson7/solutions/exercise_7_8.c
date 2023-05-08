#include<stdio.h>
#include<string.h>
#include<stdlib.h>   

#define SIZE 3 

void add(float [], float []);
int  mult(float [], float[]); 

int main(void)
     {   
       int i,p; 
       float a[SIZE] = {3,4,1};
       float b[SIZE] = {6,7,2};
       
       add(a,b);
       
       p = mult(a,b);
       printf("\na*b = %d",p); 
       return(0);
     }   


void add(float a[SIZE],float b[SIZE])
     {
      int i;
      int c[SIZE];

      for(i=0;i<SIZE;i++)
        {
         c[i] = a[i]+b[i]; 
        }

      for(i=0;i<SIZE;i++)
      printf("\n%d",c[i]);
    
     }


int mult(float a[SIZE],float b[SIZE])
    {
     int i,ans=0;
     for(i=0;i<SIZE;i++)
      ans += (a[i]) * (b[i]);

     return(ans); 
    }

