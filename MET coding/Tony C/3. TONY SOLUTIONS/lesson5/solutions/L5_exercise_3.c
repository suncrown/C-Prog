#include<stdio.h>

void cone(float,float); /* prototype */
void hemi(float);

 int main(void)
 {
  float radius,height;
  printf("\nPlease enter the radius AND height \n");
  scanf("%f,%f",&radius,&height);
  cone(radius,height);
  hemi(radius);
 }
  
 void cone(float r, float h)
 {
  float pi=3.14;
  printf("volume of a cone is %f\n", (pi * r * r * h) / 3.0);
 }  

 void hemi(float r) /* declaration */
  { 
    float pi=3.14; 
    printf("vol of hemisphere %f\n", (2.0/3.0) * pi * r * r * r);
  }
