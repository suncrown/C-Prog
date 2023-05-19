#include <stdio.h>

void main(void)
 {
  int x=10,y=12;
  int *ptrx, *ptry;
  ptrx = &x;      /* block b */
  ptry = &y;
  
  *ptrx = ++(*ptrx); /* block c */
  *ptry = --(*ptry);
   printf(" x is now %d and y is now %d \n",x,y); 
 } 
