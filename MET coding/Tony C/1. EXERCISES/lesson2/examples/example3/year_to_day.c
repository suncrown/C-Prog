#include<stdio.h>

int main(){

	float years, days;
	printf("Type in your age in years: ");
	scanf("%f",&years);
	days = years * 365;
	printf("You are %.1f days old\n",days);
	return 0;
}

