#include<stdio.h>
#include<string.h>

#define length  20
#define size    4

float average(int []);
void  sort(int []);

int main(void)
 {
  int  i,scores[size];
  char names[size][length];
 
  for(i=0;i<size;i++)
    {
     printf("\nPlease enter name score ");
     scanf("%s %d",&names[i],&scores[i]);
    }

 
  for(i=0;i<size;i++)
     printf("\n %s\t %d ", names[i], scores[i]);

  printf("\nAverage:%f",average(scores));
  
  sort(scores);
  
  for(i=0;i<size;i++)
     printf("\n %d",scores[i]);

  return(0);
 }

float average(int a[size])
    {
      int i;
      float sum;

      for(i=0;i<size;i++)
        sum += a[i];

      return(sum/ (float)size);
    }

void sort(int a[size])
   {
    int i,j,hold;
    for(i=0;i<size;i++) 
        {
         for(j = i + 1; j < size;j++)
          {
           if( a[i] > a[j]) 
             {
              hold =  a[i];
              a[i] =  a[j];
              a[j] =  hold;
             }
           }
         }
   }
 
    
