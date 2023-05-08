#define ROW 3
#define COL 5        
#include<stdio.h>
#include<math.h>
                  
int main(void)
      {
       static int hold[ROW][COL]= {{3,4,6,6,8},{7,10,2,9,7},{19,4,8,1,5} };
       int j,k;
       for(j=0;j< ROW;j++)
          for(k=0;k< COL;k++)
             *(*(hold+j)+k) = pow(*(*(hold+j)+k),2);
              puts("table of numbers squared \n");
                     
        for(j=0;j< ROW;j++)
           {
            for(k=0;k< COL;k++)
            printf(" %d ", *(*(hold+j)+k) );
            printf("\n"); 
           } 
        return(0);                                 
       } 
