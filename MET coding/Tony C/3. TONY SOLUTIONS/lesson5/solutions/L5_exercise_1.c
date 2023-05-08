#include<stdio.h>

void draw_name(char *); /* prototype */

 int main(void)
 {
  draw_name("Mr Bean");
 }
  
 void draw_name(char * name) /* declaration */
  {
   int k;
   printf("\n##################");
   for(k=1;k<=5;k++)
   printf("\n#\t\t #");
   printf("\n#   %s      #",name);
   for(k=1;k<=5;k++)
   printf("\n#\t\t #");
   printf("\n##################\n");
  }
