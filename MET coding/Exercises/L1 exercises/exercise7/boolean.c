#include<stdio.h>

int main(){
	int age;
	age = 15;
	printf("Is age less than 21 ? %d\n", age<21);
	// The above is true therefore 1 would be returned as output
	
	age = 22;
	printf("Is age less than 21 ? %d\n", age<21);
	// The above is true therefore 0 would be returned as output
	return 0;
}
