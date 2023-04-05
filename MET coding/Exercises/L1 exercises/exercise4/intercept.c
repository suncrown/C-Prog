#include<stdio.h>
/* Modify the program in Q3 to first print out the point at which the line joining the points crosses the Y-axis. Then print out the equation of the line in the form "y = m x + c". */

int main(){
	float y1,y2;
	float x1, x2;
	char comma;
	float x, y;
	float intercept;
	float slope;
	//float array1[] = {x1,y1};
	//float array2[] = {x2,y2};

	printf("Please enter first point cordinates x1,y1:\n");
	scanf("%f %c %f",&x1, &comma, &y1);  

	printf("Please enter second point cordinates x2,y2:\n");
	scanf("%f %c %f",&x2,&comma, &y2);  

	slope = (y2-y1)/(x2-x1);
	
	printf("Please enter new point cordinates x,y:\n");
	scanf("%f %c %f",&x,&comma, &y);  
	intercept = y - slope*x;
	printf("x1=%f, y1=%f\n",x1,y1);
	printf("x2=%f, y2=%f\n",x2,y2);
	printf("The Intercept on the y axis is %0.1f\n",intercept);
	printf("The equation of the straight line is %f x +  %f\n",slope,intercept);
	return 0;
}
