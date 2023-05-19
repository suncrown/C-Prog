#include <stdio.h>
#define num 4
void main(void)
      {
       int i,check=0;
       char name[50];
       static char *list[num] = { "John","Pat","June","Kate" };
       puts(" ENTER YOUR NAME");
      gets(name);
      for(i=0;i<=3;i++)
         if(strcmp(list[i],name)==0) check=1;   
      if(check)
       printf("YOU MAY ENTER");
      else
       printf("SORRY ,NO ENTRY");
     }    

