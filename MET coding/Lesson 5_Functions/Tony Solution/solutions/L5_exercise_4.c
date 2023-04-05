#include<stdio.h>

int hist(int);
 /* prototype */
int all();
int main()
 {
  int st1,st2,st3,st4,st5,st6;
  printf("\nPlease enter the six exam score \n");
  scanf("\n%d,%d,%d,%d,%d,%d",&st1,&st2,&st3,&st4,&st5,&st6);
  int all (){
  //hist(st1);
  //hist(st2);
  //hist(st3);
  printf("%d%d%d\n", hist(st1),hist(st2), hist(st3));
  return;
  }
  //all();
 //printf("%d%d%d%d%d%d",hist(st1),hist(st2),hist(st3),hist(st4),hist(st5),hist(st6));
  //hist(st2);
  //hist(st3);
  //hist(st4);
 // hist(st5);
  //hist(st6);
  //printf("\n");
 all();
}
  
 int hist(int h){
  int i;
  //printf("\n");
  for(i=0;i<h;){
  	printf("#" );
 	i++;
  //printf("\n");
  //return i;
  }
 printf("\n");

 }




