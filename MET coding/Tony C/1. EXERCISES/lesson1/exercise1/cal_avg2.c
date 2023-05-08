#include<stdio.h>

int main(){
	int first_num, second_num, third_num, avg_num;
	printf("Please enter the first number:");
	scanf("%d",&first_num);

	printf("Please enter the Second number:");
	scanf("%d",&second_num);

	printf("Please enter the third number:");
	scanf("%d",&third_num);
	
	avg_num = (first_num + second_num + third_num)/3;
	printf("The average of the 3 numbers is: %d\n",avg_num); 
	
	return 0;
}
