#include<stdio.h>

int main(void)
 {
 char ch,a,b,c;
 puts("Enter a character");
 scanf("%c",&ch);
 
 if( ch=='z' || ch=='Z')
  printf("\n YOU HAVE TYPE THE LETTER Z\n");
 
 if( ch !='z' && ch !='Z')
  printf("\n YOU HAVE NOT TYPES IN THE LETTER z\n");
 

 return(0);
 } 
