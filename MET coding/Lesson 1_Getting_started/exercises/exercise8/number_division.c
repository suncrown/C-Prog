#include<stdio.h>
int main(){
	float num1 = 1.0, num2 =3.0;
	int intresult = (int)(num1/num2);
	float floatresult = num1/num2;

	printf("The result of %f divided by %f in integer is %d\n",num1, num2,intresult);
	printf("The result of %f divided by %f in float is %f\n",num1, num2,floatresult);
	
	return 0;
}
