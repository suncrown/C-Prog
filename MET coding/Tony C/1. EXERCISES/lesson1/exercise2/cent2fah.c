#include<stdio.h>
/* A program to read a tem in centrigade and output to Fahrenheit ((0°C × 9/5) + 32 = 32°F
 * */
int main(){
	float temp, fah;

	printf("Please enter the value of Temperature in Centrigrade: ");
	scanf("%f",&temp);
	fah = (temp * 9/5) + 32;
	printf("The corresponding temperature in Fahrenheit is:%0.1f\n",fah);
	return 0;
}
