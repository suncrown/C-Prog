#include <stdio.h>
int main(void)
      {
        static char *ptr = "HELLO";
        char name[50];
        puts(" Enter your name");
        gets(name);
        puts(ptr);
        puts(name);
        return(0);
      }  


