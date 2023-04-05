#include <math.h>
#include<stdio.h>
#include<string.h>
int main(){
        int base;
	int power;
	char yes[2];
	char Y[2], N[2];
	do{
        	printf("Please enter the base :");
		scanf("%d",&base);
        	printf("Please enter the power :");
		scanf("%d", &power);
		int result = (int)pow(base,power);
        	printf("%d raised to the power of %d is: %d\n ", base, power, result);
		printf("Do you want to continue? Y/N: ");
		scanf("%s",&yes);
	}
	while (strcmp(yes,Y)==0);
        return 0;
}
