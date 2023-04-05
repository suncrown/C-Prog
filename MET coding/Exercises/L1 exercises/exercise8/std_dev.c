/* Steps:
 * Step 1: Find the mean
 * Step 2: For each data point, find the square of its distance to the mean. 
 * Step 3: Sum the values from Step 2. 
 * Step 4: Divide by the number of data points*/

#include<stdio.h>
#include<math.h>

int main(){

	float num1, num2, num3;
	float mean, sd;
	char comma;
	printf("Please enter three numbers in the form (x,y,z):\n");
	scanf("%f %c %f %c %f", &num1,&comma, &num2, &comma, &num3);
	mean = (num1 + num2 + num3)/3;
	sd = sqrt ((pow((mean-num1),2) + pow((mean-num2),2) + pow((mean-num3),2))/3);
	printf("The standard deviation of %0.1f,%0.1f,%0.1f is: %0.1f\n",num1, num2,num3,sd);
	return 0;
}

