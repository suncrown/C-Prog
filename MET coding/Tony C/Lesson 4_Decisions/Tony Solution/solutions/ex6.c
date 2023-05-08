#include <stdio.h>

int main()
 {
  float x,y;
  char op;

  printf("Please enter 1 number, an operator , followed by another number: 4*3\n");
  scanf("%f%c%f",&x,&op,&y);
     switch(op) 
       {
        case '+': printf("Answer:%f\n",x+y);
        break;
        case '-': printf("Answer:%f\n",x-y);
        break;
        case '/': printf("Answer:%f\n",x/y);
        break; 
        case '*': printf("Answer:%f\n",x*y);
        break;
        default:printf("Please use only +,-,*,/ operators \n");
        break;
        } 
  return 0;
  }
