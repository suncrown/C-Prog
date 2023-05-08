#include <stdio.h>
#define SIZE 3

void fuct_sq(int *);
                    
void main(void)
      {
       int i;
       static int hold[SIZE]={3,4,5};
       fuct_sq(hold);
       for(i=0;i< SIZE;i++)
            printf( "%d \n ",hold[i]);
       } 
                   
void fuct_sq(int *ptr)
       {
        int k;
        for(k=0;k< SIZE;k++)
            *(ptr+k)=  ( *(ptr+k)  ) *  ( *(ptr+k) ) ;
       }  
