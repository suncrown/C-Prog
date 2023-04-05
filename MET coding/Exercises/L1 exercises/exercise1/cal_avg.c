#include<stdio.h>

int main(){
	int count, num, i,sum, avg_num;
	count = 1;
	sum = 0;

	do{
	printf("Please enter the number in position %d:",count);
	scanf("%d",&num);

	sum +=num;
	
	count +=1;
	}
	while (count <4);
	
	printf("The sum of the %d numbers is: %d\n",(count-1),sum); 
	
	printf("The average of the %d numbers is: %d\n",(count-1),sum/(count-1)); 
	return 0;
}
