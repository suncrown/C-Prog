#include<stdio.h>

int main()
 {
 int grade;
 printf("Enter your grade please\n");
 scanf("%d",&grade);
 if( grade > 100 || grade < 0)
   printf("ONLY values from 0 to 100 are allowed\n");
 else if (grade >= 80 && grade <= 100)
 printf("Well done your grade is an A %d\n", grade);
 else if (grade >= 60 && grade <= 79)
 printf("Well done your grade is a B  %d\n", grade);
 else if (grade >= 40 && grade <= 59)
 printf("You passed , you got a D %d\n", grade);
 else
 printf("You failed %d \n ",grade);
 
 return 0;
 } 
