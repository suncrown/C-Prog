 di/* using getc with stdin instead of getchar */ 
#include <stdio.h>
int main()
{
char choice;
choice = getc(stdin); /* stdin argument must be in the function*/ 
putchar(choice);
return(0);
}
