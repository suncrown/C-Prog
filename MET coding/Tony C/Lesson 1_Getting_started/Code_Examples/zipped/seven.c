#include <stdio.h>
int main()
{
 int num;
 printf("Type a number between 0 and 9: ");
 scanf("%d", &num);
 if (num >=0 && num <=9)
 printf("You typed %d.", num);

 printf("\nType another number between 0 and 9: ");
 scanf("%d", &num);

 printf("You typed %d.\n", num);
 if (num > 9)
 printf("You did not type a number between 0 and 9.");
 return(0);
}
