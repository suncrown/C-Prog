/*a program to output the square of a number that the user enters*/
#include<stdio.h>
#include<math.h>

int main(){
	int num, square;
	printf("Please enter a number:");
	scanf("%d",&num);
	square =(int)pow(num,2);
	printf("The square of the number you entered is %d\n",square);
	return 0;
}
