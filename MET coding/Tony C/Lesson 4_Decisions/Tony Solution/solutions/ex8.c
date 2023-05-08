#include <stdio.h>

int main()
 {
  char txt[100];
  int i=0,count=0;

  printf("Please enter a line of text \n");
  fgets(txt,100,stdin);

  while( i < 100 )
   {
     
 
    do
      {  
       count++;
       i++;
      }while( !isspace(txt[i]) && i<100);
    
     printf("\nCount:%d\n",count);
     count = -1;
   }
  return 0;
  }
