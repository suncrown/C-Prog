#include<stdio.h>
#include<math.h>

//Develop a program of your choice that uses the logical operators ||, ! and &&.
// A Quizz game

int main(){
int question,num, square;
int level1=0;
char Y,N, selection;

printf("Please select a question number below\n");
printf("Enter '1' to select Question 1\n");
printf("Enter '2' to select Question 2\n");
scanf("%d", &question);

if  (question == 1 && question != 2){
	
printf("Enter a number between 1 and 4\n");
scanf("%d", &num);
if (num == 1 || num == 2 || num == 3){
	level1 = 1;
	printf("You have entered %d, You are Correct\n",num);
	printf("Do you want to proceed to Question 2? Y/N\n");
	scanf("%c", &selection);
	printf("You have selected %c\n:",selection);
	
	if (selection == 'Y'){
		printf("What is the square of %d\n?",num);
		scanf("%d", &square);
		

		if  (square ==num*num && level1==1){
			printf("You have entered %d, You are Correct\n",num*num);
			printf("Congratualations! You have completed this quiz\n");
		}
	}
}
else
	printf("That is an invalid entry!\n");

}
return 0;
}
