/* The two basic input function are scanf and getchar */
#include<stdio.h>
int main(){
	char answer;
	int month;

	printf("Is Ireland in Europe? Type Y/N:\n");
	answer = getchar();

	printf("How many months is in a year?\n");
	scanf("%d",&month);

	printf("Your answers are: %c and %d\n",answer,month);
	return 0;
}
