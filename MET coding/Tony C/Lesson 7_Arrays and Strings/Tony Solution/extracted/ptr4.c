#include<stdio.h>

void main(void )
      {
       int i=0,number;
       float sum=0.; 
       float num[50];
       puts("A number <= 0 quits!!");                 
        do
          {
           printf("enter (a positive value) number %d \n",i+1);
           scanf("%f",num+i);
          } while( *(num+i++) > 0);

        number=i-1;
        for(i=0;i<=number;i++)
        sum+=*(num+i);
        printf("average = %f \n",sum/number);
        }  

