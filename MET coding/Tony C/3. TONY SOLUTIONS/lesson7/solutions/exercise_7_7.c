#include<stdio.h>
#include<math.h>
#include<stdlib.h>   

#define SIZE 4 

void  fill(float []);
float mean(float  [] );
float sd(float [] );  

int main(void)
     {   
      
       int i; 
       float temps[SIZE];
       
       fill(temps);

       printf("\nMean: %3.4f", mean(temps)); 
       printf("\nsd  : %3.4f", sd(temps)); 
    
       for(i=0;i<SIZE;i++)
       {
       printf("\n%3.4f",temps[i]);
       }

     }   


void fill(float v[SIZE])
     {
      int i;

      for(i=0;i<SIZE;i++)
        {
        printf("Please enter Temperation for Month %d: ",i+1);
        scanf("%f",&v[i]);
        }
     }


float mean(float v[SIZE])
      {
       int i;
       float mean=0.0;

       for(i=0;i<SIZE;i++)
          {
           mean = mean + v[i];
          }
       return(mean/(float)SIZE);
      }


float sd(float v[SIZE]) 
      {
       int i; 
       float sdev,m;  
       m = mean(v);      
 
       for(i=0; i<SIZE;i++)
         {
          sdev =+ pow( ( v[i] - m ),2);            
         } 
 
       sdev = (sdev / (float) SIZE);
       sdev = pow(sdev,0.5);
       return(sdev);
      }    




