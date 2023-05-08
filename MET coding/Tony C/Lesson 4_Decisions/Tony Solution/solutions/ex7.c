#include <stdio.h>

int main()
 {
  char c;
  char txt[100];
  int i=0,space=0;

  printf("Please enter a line of text followed by a full stop\n");
  fgets(txt,100,stdin);

  while( i < 100 && txt[i] != '.')
  {  
   if(txt[i] == ' ')
     space++;
   i++;
  }
  printf("Spaces:%d",space);
  return 0;
  }
