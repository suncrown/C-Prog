#include<stdio.h>

int main(void)
 {
 int speed;
 puts("What speed were you travelling at ?");
 scanf("%d",&speed);
 
 if( speed > 85)
  printf("\n Your speed was %d - this is dangerous driving! \n",speed);
 else if( speed > 70)
  printf("\n Your speed was %d - you are exceeding the speed limit of 70 \n", speed); 
 else if( speed > 55)
  printf("\n You speed was %d  - have a good day\n",speed);
 else if(speed >= 40)
  printf("\n Your speed was %d - try and keep up with traffic \n",speed);
 else 
  printf("\n Your speed was %d - this is too slow for the motor way\n",speed);

 return(0);
 } 
