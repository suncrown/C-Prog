/* Passing by value */ 

#include <stdio.h>

void change(int,int);
void swap(int* , int*);

void main(void)
{
 int x,y;
 x=9;y=11;
 printf("Original    :  x = %d  y = %d\n",x,y);
 change(x,y);
 printf("After change:  x = %d  y = %d\n",x,y);
 swap(&x,&y);
 printf("After   swop:  x = %d  y = %d\n",x,y);
}
        
void change(int a,int b)
{
 int hold;
 hold = a;
 a    = b;
 b    = hold;
}     

void swap(int *a,int *b)   /* arguments are now pointers to intergers */
{
 int hold;
 hold  = *b;         
  *b   = *a;
  *a    = hold;
}  
