#include<stdio.h>
/* program that reads in two points (x1,y1), (x2,y2) and prints out the slope of the line joining the  two points. the gradient of a straight line is (y2-y1)/(x2-x1) */

int main(){
	float y1,y2;
	float x1, x2;
	char comma;
	float slope;
	//float array1[] = {x1,y1};
	//float array2[] = {x2,y2};

	printf("Please enter first point cordinates x1,y1:\n");
	scanf("%f %c %f",&x1, &comma, &y1);  

	printf("Please enter second point cordinates x2,y2:\n");
	scanf("%f %c %f",&x2,&comma, &y2);  

	slope = (y2-y1)/(x2-x1);
	printf("x1=%f, y1=%f\n",x1,y1);
	printf("x2=%f, y2=%f\n",x2,y2);
	printf("The slope of the line joining the two points is %0.1f\n",slope);
	return 0;
}
