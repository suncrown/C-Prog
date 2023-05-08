
#include<stdio.h>

float slope(float,float,float,float);       /* prototype */
float intercept(float,float,float);

 int main(void)
 {
  float x1,x2,y1,y2,m,c;

  printf(" Please enter 2 points on the line. (x1,y1),(x2,y2) ");
  scanf("(%f,%f),(%f,%f)",&x1,&y1,&x2,&y2);
  printf("(%f,%f),(%f,%f)",x1,y1,x2,y2);
  m = slope(x1,y1,x2,y2);
  c = intercept(m,x1,y1);
  printf("\n The slope of the line is %f\n",m);
  printf("\n The intercept with the Y-axis is %f\n",c);
  return(0);
 }

 float slope(float x1,float y1, float x2, float y2)
  {
   return(  (y2-y1)/ (x2-x1) );
  }

 float intercept(float m,float x, float y)
 {
  return( y - m*x );
 }


