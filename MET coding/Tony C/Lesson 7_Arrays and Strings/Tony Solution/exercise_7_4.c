#include<stdio.h>
#include<string.h>
#include<stdlib.h>   

#define SIZE 10 

void  fill(float []);
float largest(float  [] );
float smallest(float [] );  

int main(void)
     {   
      
       int i; 
       float values[SIZE];
       
       fill(values);

       printf("\nLargest  Value: %f", largest(values)); 
       printf("\nSmallest Value: %f", smallest(values)); 
    
       for(i=0;i<SIZE;i++)
       {
       printf("\n%f",values[i]);
       }

     }   


void fill(float v[SIZE])
     {
      int i;

      for(i=0;i<SIZE;i++)
        {
        printf("Please enter value %d: ",i);
        scanf("%f",&v[i]);
        }
     }


float largest(float v[SIZE])
      {
       int i;
       float largest;

       largest = v[0];

       for(i=1;i<SIZE;i++)
          {
           if( largest < v[i])
             largest =  v[i];
          }
       return(largest);
      }


float smallest(float v[SIZE]) 
      {
       int i; 
       float smallest;  
       smallest = v[0];

       for(i=1;i < SIZE;i++)
         {
          if( smallest > v[i])
             smallest = v[i];  
         } 
       return(smallest);
      }    




