exercise1.c:18:4: error: case label does not reduce to an integer constant
    case (0<score && score < 40) : printf("Your grade is %c is:\n", D); break;
    ^
exercise1.c:19:4: error: case label does not reduce to an integer constant
    case (40<score && score < 60): printf("Your grade is %c is:\n", C); break;
    ^
exercise1.c:20:4: error: case label does not reduce to an integer constant
    case (60<score && score < 80): printf("Your grade is %c is:\n", B); break;
    ^
exercise1.c:21:4: error: case label does not reduce to an integer constant
    case (80<score && score < 101): printf("Your grade is %c is:\n", A); break;


#include <math.h>
#include<stdio.h>

//Using the if-else construct write a program that reads in an exam mark (0-100) and prints out
//what grade the mark falls into. Use the following: A(80-100), B(60-79),C(40-59) and D(<40).

int main(){
        int score;
        char A,B,C,D;
        printf("Please enter your score :");
        scanf("%d:",&score);
        if (0 < score && score < 40)
            printf("Your grade is %c:\n",'D');
        else if (39 < score && score < 60)
            printf("Your grade is %c:\n",'C');
        else if (59 < score && score < 80)
            printf("Your grade is %c:\n",'B');
        else if (79 < score && score < 101)
            printf("Your grade is %c:\n",'A');
        else
           printf("Please enter correct score!\n");
        return 0;