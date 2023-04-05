/* The output statements in C - note putc and stdout */ 

#include <stdio.h>
int main()
{
 char var1 = 'y';
 putchar(var1);

 char str1[25] = "C Programming";
 puts(str1);

 char var2 = 'F';
 putc(var2, stdout);

 int x = 7, y = 8;
 printf("%d\n%d",x,y);

 return(0);
}
